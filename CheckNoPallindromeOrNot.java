import java.util.*;

class CheckPallindrome
{
    public boolean CheckPallindromeNo(int No)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = No;

        if(No < 0)
        {
            No =- No;
        }
        while(No != 0)
        {
            iDigit = No %10;
            iRev = (iRev * 10) + iDigit;
            No = No / 10;
        }
        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class CheckNoPallindromeOrNot
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        CheckPallindrome cobj = new CheckPallindrome();

        bRet = cobj.CheckPallindromeNo(iNo);
        if(bRet == true)
        {
            System.out.println(iNo+" number is Pallindrome.");
        }
        else
        {
            System.out.println(iNo+" number is not Pallindrome.");
        }
    }
}