import java.util.*;

class SummationOfFactors
{
    public void DisplayFactors(int No)
    {
        int iCnt = 0;

        System.out.println("Factors of "+No+" is:");
        for(iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No % iCnt ==0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
    
    public int Summation(int No)
    {
        int iCnt = 0;
        int iSum = 0;

        System.out.println();
        for(iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }



}
class SumFactors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number to find summation of its factors:");
        iNo = sobj.nextInt();

        SummationOfFactors obj = new SummationOfFactors();

        obj.DisplayFactors(iNo);

        iRet = obj.Summation(iNo);

        System.out.println("Summation of factors is:"+iRet);
    }
}