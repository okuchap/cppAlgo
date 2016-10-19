#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int b,f,r,v;
    int bldg[4][3][10] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> b >> f >> r >> v;
        bldg[b-1][f-1][r-1] += v;
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 10; ++k)
            {
                if(k!=9) cout << " ";
                cout << bldg[i][j][k];
            }
            cout << endl;
        }
        if(i!=3) cout << "####################" << endl;
    }
    cout << endl;
    return 0;
}