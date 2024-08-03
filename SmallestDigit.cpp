#include<iostream>
using namespace std;

class SmallestDigit
{
    public:
      int No;

      SmallestDigit(int iValue)
      {
        No = iValue;
      }

      int MinDigit()
      {
        int iDigit = 0;
        int iMin = 9;

        if(No < 0)
        {
            No =- No;
        }
        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            No = No / 10;
        }
        return iMin;
      }
      

};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    SmallestDigit sobj(iNo);

    iRet = sobj.MinDigit();

    cout<<"Smallest digit from "<<iNo<<" is:"<<iRet<<"\n";
    
    return 0;

}