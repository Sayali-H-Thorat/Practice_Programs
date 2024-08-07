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
        cout<<"Enter the elements of an array:\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
      }

      void Display()
      {
        cout<<"Elements of array are:\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
      }

      void DisplayOddEvenSum()
      {
        int iCnt = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenSum = iEvenSum + Arr[iCnt];
            }
            else
            {
                iOddSum = iOddSum + Arr[iCnt];
            }
        }
        cout<<"Sum of all Even elements from array is:\n"<<iEvenSum<<"\n";
        cout<<"Sum of all Odd elements from array is:\n"<<iOddSum<<"\n";
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
    aobj.DisplayOddEvenSum();

    return 0;
}