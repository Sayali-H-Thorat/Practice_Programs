/*
iRow = 5,iCol = 5
Pattern is:
1       *       *       *       *
*       2       *       *       *
*       *       3       *       *
*       *       *       4       *
*       *       *       *       5
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

        if(iRow < 0)
        {
            iRow = -iRow;
        }

        if(iCol < 0)
        {
            iCol = -iCol;
        }

        cout<<"Pattern is:\n";
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    cout<<i<<"\t";
                }
                else
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
}