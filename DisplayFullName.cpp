#include<iostream>
#include<string>

using namespace std;

int main()
{
    string Name;

    cout<<"Enter your name:\n";
    // cin>>Name;
    getline(cin,Name);

    cout<<"Hii " <<Name<<"\n";

    return 0;
}
