import java.util.*;

class SmallDigit
{
    public int MinDigit(int No)
    {
        int iDigit = 0;
        int iMin = 9;

        if(No < 0 )
        {
            No =- No;
        }
        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            No = No / 10;
        }
        return iMin;
    }
}

class SmallestDigit
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        SmallDigit mobj = new SmallDigit();

        iRet = mobj.MinDigit(iNo);

        System.out.println("Smallest digit from "+iNo+" is: "+iRet);

    }
}