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
      void Factors()
      {
          int iCnt = 0;
          cout<<"Factors of "<<No<<" are:\n";
          for(iCnt = 1; iCnt<= (No/2); iCnt++)
          {
              if(No % iCnt == 0)
              {
                  cout<<iCnt<<"\t";
              }

          }

      }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the number to find factors:\n";
    cin>>iNo;

    DisplayFactors obj(iNo);

    obj.Factors();

    return 0;
}