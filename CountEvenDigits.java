import java.util.*;

class CountDigits
{
    public int CountEven(int No)
    {
        int iDigit = 0;
        int iEvenCnt = 0;

        if(No < 0)
        {
            No =- No;
        }
        if(No == 1)
        {
            return 1;
        }

        while(No != 0)
        {
            iDigit = No %10;
            if((iDigit %2) == 0)
            {
                iEvenCnt++;
            }
            No = No / 10;
        }
        return iEvenCnt;
    }
}

class CountEvenDigits
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        CountDigits cobj = new CountDigits();

        iRet = cobj.CountEven(iNo);

        System.out.println("Count of Even digits from "+iNo+" is: "+iRet);

    }
}