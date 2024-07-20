#include<iostream>
using namespace std;

class Mult2No
{
    public:
      int No1;
      int No2;

      Mult2No(int iValue1,int iValue2)
      {
          No1 = iValue1;
          No2 = iValue2;
      }

      int Multiplication()
      {
          int iResult = 0;

          iResult = No1 * No2;

          return iResult;
      }
};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter the first number:\n";
    cin>>iNo1;

    cout<<"Enter the second number:\n";
    cin>>iNo2;

    Mult2No obj(iNo1,iNo2);

    iRet = obj.Multiplication();

    cout<<"Multiplication of two no is:"<<iRet<<"\n";

    return 0;
}