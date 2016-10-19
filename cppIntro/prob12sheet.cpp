#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[101][101] = {};
    int r,c,rsum,csum,tsum;
    cin >> r >> c;
    //input the values
    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= c; ++j)
        {
            cin >> a[i][j];
        }
    }
    //culculate the sums
    //the sum of rows
    for (int i = 1; i <= r; ++i)
    {
        rsum = 0;
        for (int j = 1; j <= c; ++j)
        {
            rsum += a[i][j];
        }
        a[i][c+1] = rsum;
    }
    //the sum of columns
    for (int i = 1; i <= c; ++i)
    {
        csum = 0;
        for (int j = 1; j <= r; ++j)
        {
            csum += a[j][i];
        }
        a[r+1][i] = csum;
    }
    //total sum
    tsum = 0;
    for (int i = 1; i <= r; ++i)
    {
        tsum += a[i][c+1];
    }
    a[r+1][c+1] = tsum;
    //print the values
    for (int i = 1; i <= r+1; ++i)
    {
        for (int j = 1; j <= c+1; ++j)
        {
            cout << a[i][j];
            if(j!=c+1) cout << " ";
            if(j==c+1) cout << endl;
        }
    }
    return 0;
}