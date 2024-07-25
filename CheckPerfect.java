import java.util.*;

class Perfect
{
    public boolean CheckPerfectNo(int No)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == No)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class CheckPerfect
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the number to check whether it is perfect or not:");
        iNo = sobj.nextInt();

        Perfect pobj = new Perfect();

        bRet = pobj.CheckPerfectNo(iNo);
        if(bRet == true)
        {
            System.out.println(iNo +" number is perfect.");
        }
        else
        {
            System.out.println(iNo +" number is not perfect.");
        }
    }
}