import java.util.*;

class DisplayNonFactors
{
    public void NonFactors(int No)
    {
        int iCnt = 0;

        System.out.println("Non factors of "+No+" are: ");
        for(iCnt = 1; iCnt < No; iCnt++)
        {
            if(No % iCnt != 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
        System.out.println();
    }
    public int SumNonFactors(int No)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt < No; iCnt++)
        {
            if(No % iCnt != 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

class SumNonFactors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number to find sum of non factors: ");
        iNo = sobj.nextInt();

        DisplayNonFactors dobj = new DisplayNonFactors();

        dobj.NonFactors(iNo);

        iRet = dobj.SumNonFactors(iNo);

        System.out.println("Sum of non factors of "+iNo +" is: "+iRet);
    }
}