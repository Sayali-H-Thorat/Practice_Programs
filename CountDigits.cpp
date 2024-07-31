#include<iostream>
using namespace std;

class Digits
{
    public:
      int No;

      Digits(int iValue)
      {
        No = iValue;
      }

      int CountDigits()
      {
        int iCnt = 0;
        int iDigit = 0;

        if(No == 0)
        {
            return 1;
        }

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No %10;
            No = No /10;
            iCnt++;
        }
        return iCnt;
      }

};

int main()
{
    int iNo =0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    Digits dobj(iNo);

    iRet = dobj.CountDigits();

    cout<<"Number of digits in "<<iNo<<" number is:"<<iRet<<"\n";

    return 0;
}