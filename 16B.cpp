#include<iostream>
using namespace std;
#define MAX 100000

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

int main(int argc, char const *argv[])
{
    int A[MAX], i, n, pnt;
    cin >> n;
    for (i = 0; i<n; i++) cin >> A[i];
    pnt = partition(A, 0, n-1);
    for (int i = 0; i < n; ++i)
    {
        if(i) cout << " ";
        if(i == pnt){
            cout << "[" << A[i] << "]";
        }
        else cout << A[i];
    }
    cout << endl;
    return 0;
}