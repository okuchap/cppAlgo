#include<iostream>
#include<cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,d,r;
    double f;
    cin >> a >> b;
    d = a/b;
    r = a%b;
    f = a*1.0/b;
    printf("%d %d %f\n", d,r,f);
    return 0;
}