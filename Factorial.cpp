#include<iostream>
using namespace std;

class Factorial
{
    public:
      int No;

      Factorial(int iValue)
      {
          No = iValue;
      }

      int Fact()
      {
          int iCnt = 0;
          int iFact = 1;

          for(iCnt = 1; iCnt <= No; iCnt++)
          {
              iFact = iFact * iCnt;
          }
          return iFact;
      }

};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number to find factorial :\n";
    cin>>iNo;

    Factorial fobj(iNo);

    iRet = fobj.Fact();

    cout<<"Factorial of "<<iNo<<" is "<<iRet<<"\n";

    return 0;
}