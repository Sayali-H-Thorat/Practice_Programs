import java.util.*;

class MaximumDigit
{
    public int MaxDigit(int No)
    {
        int iDigit = 0;
        int iMax= 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            if(iMax == 9)
            {
                break;
            }
            No = No / 10;
        }
        return iMax;
    }
}

class LargestDigit
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        MaximumDigit mobj = new MaximumDigit();

        iRet = mobj.MaxDigit(iNo);

        System.out.println("Largest digit from "+iNo+" is: "+iRet);

    }
}