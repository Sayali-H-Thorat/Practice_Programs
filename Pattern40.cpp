/*
iRow = 10
Pattern is:
*                 *
 *               *
  *             *
   *           *
    *         *
     *       *
      *     *
       *   *
        * *
         *
        * *
       *   *
      *     *
     *       *
    *         *
   *           *
  *             *
 *               *
*                 *
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:
     int iRow;

     Pattern(int No1)
     {
        iRow = No1;
     }

     void DisplayPattern()
     {
        int i = 0;
        int j = 0;
        int iCol = 2 * iRow - 1;

        cout<<"Pattern is:\n";
        for(i = 1; i <= iCol; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i == j) || (j == iCol-i+1))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
     }

};

int main()
{
    int iValue1 = 0;

    cout<<"Enter number of rows:\n";
    cin>>iValue1;

    Pattern pobj(iValue1);

    pobj.DisplayPattern();

    return 0;
}