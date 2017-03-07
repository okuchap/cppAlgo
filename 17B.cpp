#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 100005
#define NIL -1

struct Node { int parent, leftChild, rightSibling; };

Node tree[MAX];
int Depth[MAX];
int height[MAX];
// D[u]: the depth of u

void setDepth(int id, int depth){
    Depth[id] = depth;
    if (tree[id].leftChild != NIL)
    {
        setDepth(tree[id].leftChild, depth+1);
    }
    if (tree[id].rightSibling != NIL)
    {
        setDepth(tree[id].rightSibling, depth);
    }
}

void printAll(int id){
    int i,c;
    cout << "node " << id << ": ";
    cout << "parent = " << tree[id].parent << ", ";
    cout << "sibling = " << tree[id].rightSibling << ", ";
    // calculate degree
    int degree = 0;
    if (tree[id].leftChild != NIL)
    {
        degree += 1;
        if (tree[tree[id].leftChild].rightSibling != NIL)
        {
            degree += 1;
        }
    }
    cout << "degree = " << degree << ", ";
    cout << "depth = " << Depth[id] << ", ";
    cout << "height = " << height[id] << ", ";

    // kind of node
    if (tree[id].parent == NIL)
    {
        cout << "root";
    }
    else if (tree[id].leftChild == NIL)
    {
        cout << "leaf";
    }
    else
    {
        cout << "internal node";
    }
    cout << endl;

    if( tree[id].parent == NIL){
        cout << "root, ";
    }
    else if( tree[id].leftChild == NIL ){
        cout << "leaf, ";
    }
    else{
        cout << "internal node, ";
    }
}

int main(int argc, char const *argv[])
{
    int numberOfNodes;
    cin >> numberOfNodes;

    int id, leftChild, rightSibling;
    for (int i = 0; i < numberOfNodes; ++i)
    {
        cin >> id >> leftChild >> rightSibling;
        if (leftChild != NIL)
        {
            tree[id].leftChild = leftChild;
            tree[tree[id].leftChild].parent = id;
        }
        if (rightSibling != NIL)
        {
            tree[id].rightSibling = rightSibling;
            tree[tree[id].rightSibling].parent = id;
        }
    }

    // set root
    int root;
    for (int i = 0; i < numberOfNodes; ++i)
    {
        if (tree[i].parent == NIL)
        {
            root = i;
        }
    }

    setDepth(root, 0);

    // find the largest depth
    int maxDepth = 0;
    for (int i = 0; i < numberOfNodes; ++i)
    {
        if (Depth[i] > maxDepth){
            maxDepth = Depth[i];
        }
    }

    // set the height of all nodes
    for (int i = 0; i < numberOfNodes; ++i)
    {
        height[i] = maxDepth - Depth[i];
    }

    // print
    for (int i = 0; i < numberOfNodes; ++i)
    {
        printAll(i);
    }

    return 0;
}