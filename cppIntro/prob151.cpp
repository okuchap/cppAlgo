#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

class Dice{
public:
    int face[6];

    Dice(int m[]){
        for (int i = 0; i < 6; ++i)
        {
            face[i] = m[i];
        }
    };
    void swap4(int a, int b, int c, int d){
        int s;
        s = face[a]; face[a] = face[b]; face[b] = face[c]; face[c] = face[d]; face[d] = s;
    }
    void move(char direction){
        if(direction == 'N') swap4(0,1,5,4);
        if(direction == 'W') swap4(0,2,5,3);
        if(direction == 'S') swap4(0,4,5,1);
        if(direction == 'E') swap4(0,3,5,2);
    }
};

int main(int argc, char const *argv[])
{
    int input[6];
    char ch;
    for (int i = 0; i < 6; ++i)
    {
        cin >> input[i];
    }
    Dice dice(input);
    while(scanf("%c", &ch) != EOF) {
        dice.move(ch);
    }
    printf("%d\n", dice.face[0]);
    return 0;
}