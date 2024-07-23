import java.util.*;

class Mathematic
{
    public int Fact(int No)
    {
        int iCnt = 0;
        int iFact = 1;

        for(iCnt = 1; iCnt <= No; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }

}

class Factorial
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number to find factorial: ");
        iNo = sobj.nextInt();

        Mathematic mobj = new Mathematic();

        iRet = mobj.Fact(iNo);

        System.out.println("Factorial of "+iNo +" is " +iRet);
    }
}