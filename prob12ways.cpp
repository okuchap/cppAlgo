#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,j,k,sum;
    int n,x;
    while(1) {
    cin >> n >> x;
    sum = 0;
    if(n==0 && x==0) break;
    for (int i = 1; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            for (int k = j+1; k < n+1; ++k)
            {
                if(i+j+k==x) sum+=1;
            }
        }
    }
    cout << sum << endl;
    }
    return 0;
}