#include<iostream>
using namespace std;

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
} 

int main()
{
    char cValue;
    bool bRet = false;

    cout<<"Enter the character:\n";
    cin>>cValue;

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        cout<<cValue<<" is capital case letter.\n";
    }
    else
    {
        cout<<cValue<<" is not capital case letter.\n";
    }

    return 0;
}