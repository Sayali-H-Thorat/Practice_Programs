
/*
No = 6
Pattern is:
6       5       4       3       2       1
*/
#include<iostream>
using namespace std;

class Pattern
{
    public:
      int No;

      Pattern(int iValue)
      {
        No = iValue;
      }

      void DisplayPattern()
      {
        int iCnt = 0;

        if(No < 0)
        {
            No =- No;
        }

        cout<<"Pattern is:\n";
        for(iCnt = No; iCnt >= 1; iCnt--)
        {
            cout<<iCnt<<"\t";
        }
      }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to print the reverse pattern till 1:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}