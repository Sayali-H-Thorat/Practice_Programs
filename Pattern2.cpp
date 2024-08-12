//iNo = 5
//Pattern is:
//1       2       3       4       5
#include<iostream>
using namespace std;

class Pattern
{
    public:
      int iNo;

      Pattern(int iValue)
      {
        iNo = iValue;
      }

      void DisplayPattern()
      {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo =- iNo;
        }
        cout<<"Pattern is:\n";

        for(iCnt =1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\t";
        }
        cout<<"\t";
      }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to print number pattern from 1:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}