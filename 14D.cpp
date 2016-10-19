#include<iostream>
#include<cstdio>

using namespace std;
static const int MAX = 100000;

int numOfPackages(int P, int w[], int n, int k){
    int num=0,sum=0,i=0;
    while(1){
        sum = 0;
        while(1){
            num += 1;
            sum += w[i];
            if(sum > P){
                sum = 0;
                i--;
                num--;;
            }
        }
    }
}