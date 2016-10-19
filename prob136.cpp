#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str,str1,str2,input;
    cin >> str;
    while(1) {
        cin >> input;
        if(input == "-") break;
        if(!isdigit(input[0])){
            cout << str << endl;
            str = input;
            continue;
        }
        str1 = str.substr(0, input.size());
        str2 = str.substr(input.size(), str.size()-input.size());
        str = str2 + str1;
    }
    cout << str << endl;
    return 0;
}