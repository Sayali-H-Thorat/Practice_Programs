/*
No = 5
Pattern is:
a       b       c       d       e
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
        char ch = 'a';

        if(No < 0)
        {
            No = -No;
        }

        cout<<"Pattern is:\n";
        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            cout<<ch<<"\t";
            ch++;
        }
     }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to print small letters pattern:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}