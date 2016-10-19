#include<iostream>
using namespace std;

int main()
{
    int S, h, m, s;
    cin >> S;
    s = S%60;
    S -= s;
    m = (S%3600)/60;
    S -= S%3600;
    h = S/3600;

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}