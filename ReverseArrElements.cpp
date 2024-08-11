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

      void DisplayReverse()
      {
        int iCnt = 0;
        cout<<"Reverse elements of array are:\n";

        for(iCnt =iSize -1; iCnt >= 0; iCnt--)
        {
            cout<<Arr[iCnt]<<"\t";
        }
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
    aobj.DisplayReverse();

    return 0;

}