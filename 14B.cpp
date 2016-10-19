#include<iostream>
#include<cstdio>

using namespace std;

int binSearch(int A[], int n, int key){
    int left = 0, right = n, mid;
    while(left < right) {
        mid = (left+right)/2;
        if(key == A[mid]) return 1;
        if(key < A[mid]) right = mid;
        if(key > A[mid]) left = mid+1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int i,n,q,A[100001],key,sum = 0;

    cin >> n;
    for( i=0; i<n; i++) scanf("%d",&A[i]);

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        scanf("%d",&key);
        sum += binSearch(A, n, key);
    }
    cout << sum << endl;
    return 0;
}