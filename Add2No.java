import java.util.*;

class Mathematic
{
    public int Addition(int No1,int No2)
    {
        int iResult = 0;

        iResult = No1+No2;

        return iResult;
    }
}

class Add2No
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);

        int iNo1=0;
        int iNo2=0;
        int iRet=0;

        System.out.println("Enter the first no:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second no:");
        iNo2 = sobj.nextInt();

        Mathematic mobj = new Mathematic();
        iRet = mobj.Addition(iNo1,iNo2);

        System.out.println("Addition of two numbers is: "+iRet);


    }

}