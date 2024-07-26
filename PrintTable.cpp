#include<iostream>
using namespace std;

class DisplayTable
{
    public:
      int No;

      DisplayTable(int iValue)
      {
          No = iValue;
      }

      void PrintTable()
      {
          int iCnt = 0;
          
          cout<<"Table of "<<No<<" is: ";
          for(iCnt = 1; iCnt <=10; iCnt++)
          {
              cout<<"\n"<<No * iCnt;
          }
      }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to print table: \n";
    cin>>iNo;

    DisplayTable dobj(iNo);

    dobj.PrintTable();

    return 0;
}