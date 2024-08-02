import java.util.*;

class ReverseNumber
{
    public int Reverse(int No)
    {
        int iDigit = 0;
        int iRev = 0;

        if(No < 0)
        {
            No =- No;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            iRev = (iRev * 10) + iDigit;
            No = No/10;
        }
        return iRev;

    }
}

class ReverseNo
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        
        ReverseNumber robj = new ReverseNumber();

        iRet =robj.Reverse(iNo);

        System.out.println(iNo+" number after reversing is : "+iRet); 

    }
}