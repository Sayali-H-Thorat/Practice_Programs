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

      int SumDigits()
      {
        int iCnt = 0;
        int iDigit = 0;
        int iSum = 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No %10;
            No = No /10;
            iSum = iSum + iDigit;
        }
        return iSum;
      }

};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number :\n";
    cin>>iNo;

    Digits dobj(iNo);

    iRet = dobj.SumDigits();

    cout<<"Sum of digits from "<<iNo<<" number is:"<<iRet<<"\n";

    return 0;
}
