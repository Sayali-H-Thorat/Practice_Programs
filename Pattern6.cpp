/*
No = 5
Pattern is:
1       2       3       4       5       *       *       *       *       *
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
        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            cout<<iCnt<<"\t";
        }

        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            cout<<"*\t";
        }
      }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to first print number and then * Pattern on screen:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}
