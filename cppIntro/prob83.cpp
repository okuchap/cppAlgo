#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a1,a2,a3,s;
    cin >> a1 >> a2 >> a3;
    if (a1>a2)
    {
        s = a2;
        a2 = a1;
        a1 = s;
    }
    if (a2>a3)
    {
        s = a3;
        a3 = a2;
        a2 = s;
    }
    if (a1>a2)
    {
        s = a2;
        a2 = a1;
        a1 = s;
    }

    cout << a1 << " " << a2 << " " << a3 << endl;
    return 0;
}