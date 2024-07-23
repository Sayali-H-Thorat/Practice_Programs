#include<iostream>
using namespace std;

class PrintStat
{
    public:
       int No;

       PrintStat(int iValue)
       {
           No =iValue;
       }

       void Display()
       {
           int iCnt = 0;

           iCnt = 1;
           while(iCnt<=No)
           {
               cout<<"Welcome to C++ programming...\n";
               iCnt++;
           }
       }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number of iteration:\n";
    cin>>iNo;

    PrintStat pobj(iNo);

    pobj.Display();   

    return 0;
}