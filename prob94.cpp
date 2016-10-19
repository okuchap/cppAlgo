#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,sum;
    sum = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; ++i)
    {
        if (c%i == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}