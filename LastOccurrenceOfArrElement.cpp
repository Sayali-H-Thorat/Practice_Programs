#include<iostream>
using namespace std;

class ArrayX
{
    public:
      int *Arr;
      int iSize;
      int iValue;

      ArrayX(int iValue1,int iValue2)
      {
        iSize = iValue1;
        Arr = new int[iSize];
        iValue = iValue2;
      }

      void Accept()
      {
        int iCnt = 0;

        cout<<"Enter the elements of array:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }

      void Display()
      {
        int iCnt = 0;

        cout<<"Elements of array are:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
      }

      int CheckLastOccurrence()
      {
        int iCnt = 0;

        for(iCnt = iSize -1; iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] == iValue)
            {
                break;
            }
        }

        if(iCnt == -1)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
      }

};

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iNo = 0;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    cout<<"Enter the number to check last occurrence:\n";
    cin>>iNo;

    ArrayX aobj(iLength,iNo);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.CheckLastOccurrence();

    if(iRet == -1)
    {
        cout<<iNo<<" Number is not occurred in array.\n";
    }
    else
    {
        cout<<iNo<<" number is last occurred at position "<<iRet<<"\n";
    }

    return 0;
    
}