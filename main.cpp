#include<stdio.h>
int arr[100002][100002];

int S(int n,int k) {

    if ((n<=0 || k<=0) || n < k) {return 0;}
    if (n==k) {return 1;}

    return arr[n][k] = (arr[n][k]) ? arr[n][k] : S(n-1,k-1)+S(n-1,k)*k;
}

int main() {
    int test;
    scanf("%d",&test);

    for(int i=0;i<test;i++) {
        int n,k;
        scanf("%d %d",&n,&k);

        printf("%d",S(n,k));
    }
    return 0;
}
