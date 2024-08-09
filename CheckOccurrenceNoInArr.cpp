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
        iNo = iValue2;
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

    bool CheckOccurrence()
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
        if(iFrequency == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

};

int main()
{
    int iLength = 0;
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the size of array that you want to create:\n";
    cin>>iLength;

    cout<<"Enter the number to check it is present or not in an array:\n";
    cin>>iNo;

    ArrayX aobj(iLength,iNo);

    aobj.Accept();
    aobj.Display();

    bRet = aobj.CheckOccurrence();
    
    if(bRet == true)
    {
        cout<<iNo<<" is present in an array.\n";
    }
    else
    {
        cout<<iNo<<" is not present in an array.\n";
    }

    return 0;
}