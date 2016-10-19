/* 未完 いつか暇なときに */

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 100000
#define SENTINEL 2000000000

struct Card{
    char suit;
    int value;
};

struct Card L[MAX/2 + 2], R[MAX/2 + 2];

int partition(int A[], int p, int r){
    /* Aの最後の要素を分割の基準にする */
    int x, i, j, swap;
    x = A[r];
    i = p - 1; /* iは基準より小さいグループの中で一番右端に位置するものを指すポインタ */
    for (j = p; j < r; j++){
        if (A[j] <= x)
        {
            i = i + 1;
            swap = A[i]; A[i] = A[j]; A[j] = swap;
        }
    swap = A[i+1]; A[i+1] = A[r]; A[r] = swap;
    }
    return i + 1; /* 基準となった要素を指すポインタ */
}

