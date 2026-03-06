#include<stdio.h>

int main(){
    int n ;
    scanf("%d",&n);

    if (40 > n){
        printf("Fail\n");
    }
    else if (100 < n){
        printf("wrong\n");
    }
    else if (40 <= n){
        printf("pass\n");

    }
}
