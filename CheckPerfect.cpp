#include<iostream>
using namespace std;

class Perfect
{
    public:
      int No;

      Perfect(int iValue)
      {
          No = iValue;
      }

      bool CheckPerfect()
      {
          int iCnt = 0;
          int iSum = 0;

          for(iCnt = 1; iCnt <= (No/2); iCnt++)
          {
              if(No % iCnt == 0)
              {
                  iSum = iSum + iCnt;
              }
          }
          if(iSum == No)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
};

int main()
{
    int iNo = 0;
    bool bRet = 0;

    cout<<"Enter the number to check whether it is perfect or not:\n";
    cin>>iNo;

    Perfect pobj(iNo);

    bRet = pobj.CheckPerfect();
    if(bRet == true)
    {
        cout<<iNo<<" number is perfect.\n";
    }
    else
    {
        cout<<iNo<<" number is not perfect.\n";
    }


    return 0;
}