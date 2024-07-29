#include<iostream>
using namespace std;

class DisplayFactors
{
    public:
      int No;

      DisplayFactors(int iValue)
      {
          No = iValue;
      }

      void OddFactors()
      {
          int iCnt = 0;

          cout<<"Factors of "<<No<<" are:\n";
          for(iCnt = 1; iCnt <= (No/2); iCnt++)
          {
              if(No % iCnt ==0)
              {
                  cout<<iCnt<<"\t";
              }
          }
          cout<<"\n";

          cout<<"Odd factors of "<<No<<" are:\n";
          for(iCnt =1; iCnt <= (No/2); iCnt++)
          {
              if((No % iCnt ==0)&&(iCnt %2 != 0))
              {
                  cout<<iCnt<<"\t";
              }
          }
      }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to find odd factors:\n";
    cin>>iNo;

    DisplayFactors dobj(iNo);

    dobj.OddFactors();

    return 0;
}