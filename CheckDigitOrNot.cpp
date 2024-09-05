#include<iostream>
using namespace std;

bool CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    bRet = CheckDigit(cValue);
    if(bRet == true)
    {
        cout<<cValue<<" is digit.\n";
    }
    else
    {
        cout<<cValue<<" is not digit.\n";
    }

    return 0;
}