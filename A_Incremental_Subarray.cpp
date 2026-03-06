import sys

def solve():
    """
    Solves a single test case by checking for within-block and spanning-block occurrences.
    """
    try:
        n, m = map(int, sys.stdin.readline().split())
        a = list(map(int, sys.stdin.readline().split()))
    except (IOError, ValueError):
        return

    total_count = 0

    # Case 1: 'a' is fully contained within a single block (is an arithmetic progression).
    is_ap = True
    if m > 1:
        for i in range(1, m):
            if a[i] != a[i - 1] + 1:
                is_ap = False
                break
    
    if is_ap:
        max_val = a[m - 1]
        if n >= max_val:
            # Appears in blocks B_{max_val}, ..., B_n
            total_count += (n - max_val + 1)

    # Case 2: 'a' spans across block boundaries.
    # p is the 0-based index of the last element from block B_k.
    for p in range(m - 1):
        # A boundary must look like [..., k, 1, ...]
        if a[p + 1] != 1:
            continue
        
        k = a[p]
        if k > n:
            continue

        # Check prefix a[0...p]: must be an AP ending in k.
        start_of_prefix = k - p
        if start_of_prefix <= 0:
            continue
        
        is_prefix_ok = True
        for i in range(p + 1):
            if a[i] != start_of_prefix + i:
                is_prefix_ok = False
                break
        if not is_prefix_ok:
            continue

        # Check suffix a[p+1...m-1]: must match sequence from B_{k+1} onwards.
        is_suffix_ok = True
        current_block_num = k + 1
        expected_val = 1
        
        for i in range(p + 1, m):
            if expected_val > current_block_num:
                current_block_num += 1
                expected_val = 1
            
            if a[i] != expected_val:
                is_suffix_ok = False
                break
            
            expected_val += 1
            
        if is_suffix_ok:
            total_count += 1
            
    print(total_count)


def main():
    """
    Main function to handle multiple test cases.
    """
    try:
        num_test_cases = int(sys.stdin.readline())
        for _ in range(num_test_cases):
            solve()
    except (IOError, ValueError):
        return

if __name__ == "__main__":
    main()