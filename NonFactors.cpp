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
      void NonFactors()
      {
          int iCnt = 0;
          cout<<"Non Factors of "<<No<<" are:\n";
          for(iCnt = 1; iCnt < No; iCnt++)
          {
              if(No % iCnt != 0)
              {
                  cout<<iCnt<<"\t";
              }

          }
      }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number:\n";
    cin>>iNo;

    DisplayFactors dobj(iNo);

    dobj.NonFactors();

    return 0;
}