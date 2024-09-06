#include<iostream>
#include<String>
using namespace std;

int main()
{
    string str;

    cout<<"Enter the string:\n";
    getline(cin,str);

    cout<<"Length of string is: "<<str.length()<<"\n";

    return 0;
}