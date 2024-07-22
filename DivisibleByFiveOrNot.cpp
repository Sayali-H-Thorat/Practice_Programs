#include<iostream>
using namespace std;

class DivisibleByFiveOrNot
{
    public:
      int No;

      DivisibleByFiveOrNot(int iValue)
      {
          No = iValue;
      }

      bool Dividation()
      {
          if(No%5 ==0)
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

    DivisibleByFiveOrNot obj(iNo);

    bRet=obj.Dividation();

    cout<<iNo<<" number is divisible by 5."<<"\n";

    return 0;

}