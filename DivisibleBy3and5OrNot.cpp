#include<iostream>
using namespace std;

class DivisibleBy3and5OrNot
{
    public:
      int No;

      DivisibleBy3and5OrNot(int iValue)
      {
          No = iValue;
      }

      bool Dividation()
      {
          if((No % 3 == 0)&&(No % 5 == 0))
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

    DivisibleBy3and5OrNot obj(iNo);

    bRet = obj.Dividation();
    if(bRet == true)
    {
        cout<<iNo<<" number is divisible by 3 and 5.\n";
    }
    else
    {
        cout<<iNo<<" number is not divisible by 3 and 5.\n";
    }

    return 0;
}