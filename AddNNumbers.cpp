#include<iostream>
using namespace std;

class AddNNumbers
{
    public:
      int No;

      AddNNumbers(int iValue)
      {
          No = iValue;
      }

      int Addition()
      {
          int iCnt = 0;
          int iSum = 0;

          for(iCnt = 0; iCnt <= No; iCnt++)
          {
              iSum = iSum + iCnt;
          }
          return iSum;
      }

};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number till you want addition:\n";
    cin>>iNo;

    AddNNumbers aobj(iNo);

    iRet = aobj.Addition();

    cout<<"Addition of "<<iNo<<" numbers is: "<<iRet<<"\n";

    return 0;
}