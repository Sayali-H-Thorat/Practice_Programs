/*
iRow = 4, iCol = 4
Pattern is:
*
*       *
*       *       *
*       *       *       *
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:
     int iRow;
     int iCol;

     Pattern(int No1,int No2)
     {
        iRow = No1;
        iCol = No2;
     }

     void DisplayPattern()
     {
        int i = 0;
        int j = 0;

        if(iRow != iCol)
        {
            cout<<"Number of rows and columns are differrent.\n";
            return;
        }

        cout<<"Pattern is:\n";
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i >= j)
                {
                    cout<<"*\t";
                }
            }
            cout<<"\n";
        }
     }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter number of rows:\n";
    cin>>iValue1;

    cout<<"Enter number of columns:\n";
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);

    pobj.DisplayPattern();

    return 0;
}