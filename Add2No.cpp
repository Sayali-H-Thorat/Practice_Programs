#include<iostream>
using namespace std;

class Add2No
{
    public:
        int No1;
        int No2;

        Add2No(int iValue1,int iValue2)
        {
            No1 = iValue1;
            No2 = iValue2;
        }

        int Addition()
        {
            int iResult = 0;

            iResult = No1 + No2;

            return iResult;
        }



};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter the first number"<<"\n";
    cin>>iNo1;

    cout<<"Enter the second number"<<"\n";
    cin>>iNo2;

    Add2No obj(iNo1,iNo2);

    iRet =obj.Addition();

    cout<<"Addition of two numbers is:"<<iRet<<"\n";


    return 0;
}