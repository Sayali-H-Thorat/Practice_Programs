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
        Arr = new int[iSize];
      }

      void Accept()
      {
        int iCnt = 0;
        cout<<"Enter the array elements:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }

      void Display()
      {
        int iCnt = 0;
        cout<<"Elenments of array are:\n";
        for(iCnt= 0; iCnt< iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
      }

      int Summation()
      {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
      }

};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of elements that you want to store in an array:\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Summation();

    cout<<"Summation of array elements is: "<<iRet<<"\n";

    return 0;
}