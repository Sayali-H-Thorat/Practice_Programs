#include<iostream>
using namespace std;

int main()
{
    int iNo = 0;
    int iCnt = 0;
    int flag = 0;

    cout<<"Enter the number to check it is Prime or not:\n";
    cin>>iNo;

    for(iCnt =2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag ==0)
    {
        cout<<iNo<<" is a prime number.\n";
    }
    else
    {
        cout<<iNo<<" is not a prime number.\n";
    }

    return 0;
}