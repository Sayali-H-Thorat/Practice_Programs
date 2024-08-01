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

      int CountEvenDigits()
      {
        int iDigit = 0;
        int iEvenCnt = 0;

        if(No < 0)
        {
            No =- No;
        }

        if(No == 1)
        {
            return 1;
        }

        while(No != 0)
        {
            iDigit = No %10;
            if((iDigit %2) == 0)
            {
                iEvenCnt++;
            }
            No = No / 10;
        }
        return iEvenCnt;
      }

    
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iNo;

    CountDigits eobj(iNo);

    iRet = eobj.CountEvenDigits();

    cout<<"Count of even digits from "<<iNo<<" are: "<<iRet;

    return 0;

}