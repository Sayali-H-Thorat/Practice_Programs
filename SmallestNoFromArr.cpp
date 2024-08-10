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

     int SmallestNumber()
     {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }

        return iMin;
     }

};

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.SmallestNumber();

    cout<<"Smallest number from array is :\t"<<iRet;

    return 0;
}