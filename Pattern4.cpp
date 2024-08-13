
/*
No = 5
Pattern is:
5
4
3
2
1
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
        for(iCnt = No; iCnt >=1; iCnt--)
        {
            cout<<iCnt<<"\n";
        }
     }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to print pattern till 1 in reverse order:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}