#include<iostream>
using namespace std;

class CheckPallindrome
{
    public:
      int No;

      CheckPallindrome(int iValue)
      {
        No = iValue;
      }

      bool CheckPallindromeNo()
      {
        int iRev = 0;
        int iDigit = 0;
        int iTemp = No;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            iRev = (iRev * 10) + iDigit;
            No = No /10;
        }

        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
      }

};

int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number:\n";
    cin>>iNo;

    CheckPallindrome cobj(iNo);

    bRet = cobj.CheckPallindromeNo();
    if(bRet == true)
    {
        cout<<iNo<<" number is pallindrome\n";
    }
    else
    {
        cout<<iNo<<" number is not pallindrome\n";
    }
    return 0;
}