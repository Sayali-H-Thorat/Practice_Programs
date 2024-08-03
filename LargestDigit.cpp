#include<iostream>
using namespace std;

class LargestDigit
{
    public:
      int No;

      LargestDigit(int iValue)
      {
        No = iValue;
      }

      int MaxDigit()
      {
        int iDigit = 0;
        int iMax = 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            if(iMax == 9)
            {
                break;
            }
            No = No / 10;
        }
        return iMax;
      }

};

int main()
      {
        int iNo =0;
        int iRet = 0;

        cout<<"Enter the number:\n";
        cin>>iNo;

        LargestDigit lobj(iNo);

        iRet = lobj.MaxDigit();

        cout<<"Largest Digit from "<<iNo<<" is: "<<iRet<<"\n";

        return 0;
      }