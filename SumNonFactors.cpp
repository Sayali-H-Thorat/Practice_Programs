#include<iostream>
using namespace std;

class DisplayNonFactors
{
    public:
      int No;

      DisplayNonFactors(int iValue)
      {
          No = iValue;
      }

      void NonFactors()
      {
          int iCnt = 0;

          cout<<"Non factors of "<<No<<" are:\n";
          for(iCnt = 1; iCnt < No; iCnt++)
          {
              if(No % iCnt != 0)
              {
                  cout<<iCnt<<"\t";
              }
          }
          cout<<"\n";
      }
      

      int SumNonFactors()
      {
          int iCnt = 0;
          int iSum = 0;

          for(iCnt = 1; iCnt < No; iCnt++)
          {
              if(No % iCnt != 0)
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

    cout<<"Enter the number to find sum of non factors of no:\n";
    cin>>iNo;

    DisplayNonFactors dobj(iNo);

    dobj.NonFactors();

    iRet = dobj.SumNonFactors();

    cout<<"Sum of non factors is : "<<iRet<<"\n";

    return 0;
}