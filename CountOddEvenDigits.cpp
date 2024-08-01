#include<iostream>
using namespace std;

class CountDigits
{
    public:
      int No;

      CountDigits(int iValue)
      {
        No = iValue;
      }

      void CountOddEvenDigits()
      {
        int iEvenCnt = 0;
        int iOddCnt = 0;
        int iDigit = 0;

        if(No < 0)
        {
            No =- No;
        }

        if(No ==1)
        {
            cout<<"Even Count from "<<No<<" is:1\n";
            cout<<"Odd Count from "<<No<<" is:0\n";

            return;
        }
        while(No != 0)
        {
            iDigit = No %10;
            if((iDigit %2) == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
            No = No / 10;
        }
        cout<<"Even Count from "<<No<<" is:"<<iEvenCnt<<"\n";
        cout<<"Odd Count from "<<No<<" is:"<<iOddCnt<<"\n";
      }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    CountDigits cobj(iNo);

    cobj.CountOddEvenDigits();

    return 0;
}
