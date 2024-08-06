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
        cout<<"Elements of array are:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
      }

      void CountEvenOdd()
      {
        int iCnt = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
        }
        cout<<"Number of Even elements from array are: "<<iEvenCnt<<"\n";
        cout<<"Number of Odd elements from array are: "<<iOddCnt<<"\n";
      }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();
    aobj.CountEvenOdd();

    return 0;
}