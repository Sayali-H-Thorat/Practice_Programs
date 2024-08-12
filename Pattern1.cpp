//iNo = 6
//Pattern is:
//*       *       *       *       *       *

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
        for(iCnt =1; iCnt <=iNo;iCnt++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
};

int main()
{
    int iNo =0;

    cout<<"Enter the number to print *:\n";
    cin>>iNo;

    Pattern pobj(iNo);

    pobj.DisplayPattern();

    return 0;
}