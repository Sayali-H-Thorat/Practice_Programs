#include<iostream>
using namespace std;

class DisplayReverse
{
    public:
      int No;

      DisplayReverse(int iValue)
      {
          No = iValue;
      }

      void Reverse()
      {
          int iCnt = 0;

          cout<<"Reverse No from "<<No<<" are:\n";
          for(iCnt = No; iCnt >= 1; iCnt--)
          {
              cout<<iCnt<<"\t";
          }
      }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    DisplayReverse dobj(iNo);

    dobj.Reverse();

    return 0;
}