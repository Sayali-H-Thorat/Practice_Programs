import java.util.*;

class Addition
{
    public int Summation(int No)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0; iCnt <= No; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }

}
class AddNNumbers
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number till you want addition: ");
        iNo = sobj.nextInt();

        Addition aobj = new Addition();

        iRet = aobj.Summation(iNo);

        System.out.println("First " +iNo +" numbers Summation is: " +iRet);


    }
}