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

        cout<<"Enter the elements of an array:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }

      void Display()
      {
        int iCnt = 0;

        cout<<"Elements of an array are:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
      }

      float Average()
      {
        int iCnt = 0;
        int iSum = 0;
        float avg = 0.0f;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        avg = iSum / iSize;

        return avg;
      }

};

int main()
{
    int iLength = 0;
    float fRet = 0.0f;

    cout<<"Enter the number of elements that you want to store in an array:\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Average();

    cout<<"Average of array elements is: "<<fRet<<"\n";

    return 0;

}