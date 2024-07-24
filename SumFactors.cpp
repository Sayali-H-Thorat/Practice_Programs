#include<iostream>
using namespace std;

class DisplayFactorsSum
{
    public:
      int No;

      DisplayFactorsSum(int iValue)
      {
          No = iValue;
      }

      void Factors()
      {
          int iCnt = 0;

          cout<<"Factors of "<<No<<" are:";
          for(iCnt =1; iCnt <= (No/2);iCnt++)
          {
              if(No % iCnt == 0)
              {
                  cout<<iCnt<<"\t";
              }
          }
      }


      int FactorsSummation()
      {
          int iCnt = 0;
          int iSum = 0;
          
          cout<<"\n";
          for(iCnt = 1; iCnt <= (No/2); iCnt++)
          {
              if(No % iCnt == 0)
              {
                  iSum = iSum + iCnt;
              }
          }
          return iSum;
      }


};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number to find summation of factors:\n";
    cin>>iNo;

    DisplayFactorsSum dobj(iNo);

    dobj.Factors();

    iRet = dobj.FactorsSummation();

    cout<<"Summation of factors is :"<<iRet<<"\n";

    return 0;
}