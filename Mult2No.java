import java.util.*;

class Mathematic
{
    public int Multiplication(int No1,int No2)
    {
        int iResult = 0;

        iResult = No1 * No2;

        return iResult;
    }
}

class Mult2No
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo1 = 0;
        int iNo2 = 0;
        int iRet = 0;

        System.out.println("Enter the first number:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second number:");
        iNo2 = sobj.nextInt();

        Mathematic mobj = new Mathematic();
        iRet = mobj.Multiplication(iNo1,iNo2);

        System.out.println("Multiplication of two numbers is: "+iRet);

    }
}