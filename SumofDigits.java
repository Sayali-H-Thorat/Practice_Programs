import java.util.*;

class Digits
{
    public int Sum(int No)
    {
        int iCnt = 0;
        int iDigit = 0;
        int iSum = 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            No = No / 10;
            iSum = iSum + iDigit;
        }
        return iSum;
    }
}

class SumofDigits
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.Sum(iNo);

        System.out.println("Sum of digits from number "+iNo+" is:"+iRet);
    }
}