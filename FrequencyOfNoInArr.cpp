#include<iostream>
using namespace std;

class ArrayX
{
    public:
     int *Arr;
     int iSize;
     int iNo;

     ArrayX(int iValue1,int iValue2)
     {
        iSize = iValue1;
        Arr= new int[iSize];
        iNo = iValue2;
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
        cout<<"Elements of array are:\n";
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
     }

     int CalculateFrequency()
     {
        int iCnt = 0;
        int iFrequency = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iFrequency++;
            }
        }
        return iFrequency;
     }


};

int main()
{
    int iLength = 0;
    int iRet = 0;
    int iNo = 0;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    cout<<"Enter the number to find frequency in an array:\n";
    cin>>iNo;

    ArrayX aobj(iLength,iNo);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.CalculateFrequency();

    cout<<"Frequency of "<<iNo<<" is:"<<iRet<<"\n";

    return 0;
}