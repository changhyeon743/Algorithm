//
// Created by 이창현 on 10/01/2019.
//

#include<stdio.h>
#define SIZE 6;

int arr[] = {10,20,15,25,10,20};

int F(int x) {
    if (x<=0) { return arr[0]; }
    if (arr[x-1] <= arr[x-2]) {
        return F(x-2);
    } else {
        return F(x-1) + F(x-2);
    }
}

int main() {
    printf("%d",F(6));
}