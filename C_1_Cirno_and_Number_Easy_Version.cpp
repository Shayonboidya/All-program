// /* Date: 16.05.2026 */

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// ll a;
// int d[2];
// ll ans;

// void generate(string s, int len) {

//     if ((int)s.size() == len) {

//         // leading zero invalid except "0"
//         if (s.size() > 1 && s[0] == '0') return;

//         ll num = stoll(s);
//         ans = min(ans, abs(a - num));
//         return;
//     }

//     generate(s + char(d[0] + '0'), len);
//     generate(s + char(d[1] + '0'), len);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {

//         int n;
//         cin >> a >> n;

//         cin >> d[0] >> d[1];     

//         ans = LLONG_MAX;

//         int len = to_string(a).size();

//         // try nearby lengths
//         for (int l = 1; l <= len + 1; l++) {
//             generate("", l);
//         }

//         cout << ans << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

// Given digits d[0] < d[1], find the closest number to `a`
// by trying floor (largest valid <= a) and ceil (smallest valid >= a)
// for each possible number of digits (lengths 1..19)

const ll INF = 2e18;

int D[2]; // our two digits

// Returns smallest valid number >= a with exactly `len` digits
// Returns INF if impossible
ll ceil_valid(ll a, int len) {
    string s = to_string(a);
    // If a has more digits than len, smallest len-digit valid > a doesn't exist
    // If a has fewer digits than len, smallest len-digit valid = D[0] repeated (or D[1] if D[0]==0 and len>1... actually D[0]^len but leading digit can't be 0)
    
    // Build digit by digit with backtracking
    // digits[i] = chosen digit for position i
    int digs[20];
    int alen = s.size();
    
    if (alen > len) return INF; // can't fit
    
    // pad a on the left if alen < len
    // actually if alen < len, then any len-digit number > a
    // smallest valid len-digit number: first digit = D[0] if D[0]!=0 else D[1], rest = D[0]
    if (alen < len) {
        // smallest valid len-digit number
        int first = (D[0] != 0) ? D[0] : D[1];
        // if both digits are 0... impossible but d is strictly increasing so D[1]>=1 if D[0]=0
        ll result = 0;
        result = first;
        for (int i = 1; i < len; i++) result = result * 10 + D[0];
        return result;
    }
    
    // alen == len: find smallest valid >= a digit by digit
    // Use stack-based approach
    // At each position, we're either "tight" (must be >= a's digit) or "free" (already exceeded)
    // We want smallest, so prefer D[0] first
    
    // Recursive with memo isn't needed since only 2 choices per position
    // Try greedy: at each pos, pick smallest digit >= a[pos] if tight
    // If can't (both digits < a[pos]), backtrack
    
    vector<int> adigits(len);
    for (int i = 0; i < len; i++) adigits[i] = s[i] - '0';
    
    // Iterative backtracking
    vector<int> chosen(len, -1);
    vector<int> choice_idx(len, 0); // which of D[0],D[1] we're trying
    bool tight[20] = {};
    
    // BFS/DFS: fill left to right
    // At pos i, if tight[i]: must pick digit >= adigits[i]
    // else: pick D[0] (smallest)
    
    int pos = 0;
    // Initialize tight
    tight[0] = true;
    
    // Try to fill greedily
    // For each position, if tight pick smallest D[j] >= adigit[pos]
    // If free pick D[0]
    // If no valid choice, backtrack
    
    // Backtracking state: for each pos, track which choice index we're at
    // choice_idx[pos] = next index in {0,1} to try
    
    fill(choice_idx.begin(), choice_idx.end(), 0);
    
    while (pos >= 0 && pos < len) {
        bool found = false;
        bool is_tight = (pos == 0) ? true : (tight[pos]);
        
        for (int ci = choice_idx[pos]; ci < 2; ci++) {
            int dig = D[ci];
            // Check leading zero
            if (pos == 0 && len > 1 && dig == 0) {
                continue; // skip leading zero
            }
            if (is_tight && dig < adigits[pos]) {
                continue; // too small when tight
            }
            // Valid choice
            chosen[pos] = dig;
            choice_idx[pos] = ci + 1; // next time try from ci+1
            // Set tightness for next position
            if (pos + 1 < len) {
                tight[pos + 1] = is_tight && (dig == adigits[pos]);
            }
            pos++;
            if (pos < len) choice_idx[pos] = 0;
            found = true;
            break;
        }
        if (!found) {
            // Backtrack
            choice_idx[pos] = 0;
            chosen[pos] = -1;
            pos--;
            if (pos >= 0) {
                // The choice we made at pos was not good, try next
                // choice_idx[pos] already points to next to try (set before increment)
                // recompute tightness for pos
                // tight[pos] was set when we came down, it's still valid
                // just continue the loop at pos
            }
        }
    }
    
    if (pos < 0) return INF; // no valid number
    
    ll result = 0;
    for (int i = 0; i < len; i++) result = result * 10 + chosen[i];
    return result;
}

// Returns largest valid number <= a with exactly `len` digits
// Returns -1 if impossible
ll floor_valid(ll a, int len) {
    string s = to_string(a);
    int alen = s.size();
    
    if (alen < len) return -1; // all len-digit numbers > a
    
    if (alen > len) {
        // largest valid len-digit number: first nonzero digit... 
        // = D[1] repeated len times (all max digits)
        // but first digit: if len==1, D[1]; else D[1]
        ll result = 0;
        // first digit must be nonzero if len>1
        int first = D[1]; // D[1] >= D[0], and since sequence strictly increasing D[1]>D[0]>=0, so D[1]>=1
        result = first;
        for (int i = 1; i < len; i++) result = result * 10 + D[1];
        return result;
    }
    
    // alen == len
    vector<int> adigits(len);
    for (int i = 0; i < len; i++) adigits[i] = s[i] - '0';
    
    vector<int> chosen(len, -1);
    vector<int> choice_idx(len, 0); // for floor: try largest first, so start at index 1 (D[1])
    bool tight[20] = {};
    
    // For floor: at each pos if tight pick largest D[j] <= adigit[pos]
    // if free pick D[1]
    // Try D[1] first (index 1), then D[0] (index 0)
    
    // choice_idx[pos]: 0 means try D[1] first, 1 means try D[0], 2 means backtrack
    
    int pos = 0;
    tight[0] = true;
    fill(choice_idx.begin(), choice_idx.end(), 0);
    
    while (pos >= 0 && pos < len) {
        bool is_tight = tight[pos];
        bool found = false;
        
        // Try digits from largest to smallest: D[1], D[0]
        for (int ci = choice_idx[pos]; ci < 2; ci++) {
            int dig = D[1 - ci]; // ci=0 -> D[1], ci=1 -> D[0]
            // Check leading zero
            if (pos == 0 && len > 1 && dig == 0) {
                continue;
            }
            if (is_tight && dig > adigits[pos]) {
                continue; // too large when tight
            }
            chosen[pos] = dig;
            choice_idx[pos] = ci + 1;
            if (pos + 1 < len) {
                tight[pos + 1] = is_tight && (dig == adigits[pos]);
            }
            pos++;
            if (pos < len) choice_idx[pos] = 0;
            found = true;
            break;
        }
        if (!found) {
            choice_idx[pos] = 0;
            chosen[pos] = -1;
            pos--;
        }
    }
    
    if (pos < 0) return -1;
    
    ll result = 0;
    for (int i = 0; i < len; i++) result = result * 10 + chosen[i];
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll a;
        int n;
        cin >> a >> n;
        cin >> D[0] >> D[1];
        
        ll ans = INF;
        
        // Try all lengths from 1 to 19
        for (int len = 1; len <= 19; len++) {
            ll cv = ceil_valid(a, len);
            if (cv != INF) ans = min(ans, cv - a);
            
            ll fv = floor_valid(a, len);
            if (fv != -1) ans = min(ans, a - fv);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}