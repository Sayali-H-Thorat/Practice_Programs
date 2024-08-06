#include<iostream>
using namespace std;

class ArrayX
{
    public:
      int *Arr;
      int iSize;

      ArrayX(int iValue)
      {
        iSize = iValue;
        Arr=new int[iSize];
      }

      void Accept()
      {
        cout<<"Enter the elements of array:\n";
        int iCnt = 0;

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

      int CountEven()
      {
        int iCnt= 0;
        int iEvenCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenCnt++;
            }
        }
        return iEvenCnt;
      }

};

int main()
{
    int iLength =0;
    int iRet = 0;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.CountEven();

    cout<<"Number of even elements from an array is :"<<iRet<<"\n";

    return 0;
}