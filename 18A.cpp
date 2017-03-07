// Binary Tree Search
#include<iostream>
#include<cstdio>
#include<csdlib>
#include<string>
#include<cmath>
using namespace std;

/*
#define NIL -1
#define MAX 2000000
*/

struct Node {
    int key;
    Node *parent, *leftChild, *rightChild;
};

/*
Node tree[MAX]
こういう風にはしない（記憶領域を無駄にとりすぎる&初期化に時間がかかりすぎる）
*/

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    
}

int main(int argc, char const *argv[])
{
    int numOrder;

    // initialization
    for (int i = 0; i < MAX; ++i)
    {
        tree[i].parent = NIL;
    }

    return 0;
}
