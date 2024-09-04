#include<iostream>
using namespace std;

bool CheckSmall(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
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

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        cout<<cValue<<" is small case letter.\n";
    }
    else
    {
        cout<<cValue<<" is not small case letter.\n";
    }

    return 0;
}