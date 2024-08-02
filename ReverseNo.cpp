#include<iostream>
using namespace std;

class ReverseNumber
{
    public:
      int No;

      ReverseNumber(int iValue)
      {
        No = iValue;
      }

      int Reverse()
      {
        int iDigit = 0;
        int iRev = 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            iRev = (iRev * 10)+ iDigit;
            No = No / 10;
        }
        return iRev;
      }

};
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    ReverseNumber robj(iNo);

    iRet = robj.Reverse();

    cout<<iNo<<" number after reversing is: "<<iRet<<"\n";

    return 0;
}