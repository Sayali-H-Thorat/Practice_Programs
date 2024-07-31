import java.util.*;

class Digits
{
    public int Count(int No)
    {
        int iCnt = 0;
        int iDigit = 0;

        if(No ==0)   //filter
        {
            return 1;
        }

        if( No < 0)  // updator
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            No = No / 10;
            iCnt++;
        }
        return iCnt;
    }
}

class CountDigits
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number");
        iNo = sobj.nextInt();

        Digits dobj = new Digits();

        iRet = dobj.Count(iNo);

        System.out.println("Number of digits from number "+iNo+" is:"+iRet);        
    }
}