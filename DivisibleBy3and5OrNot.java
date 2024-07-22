import java.util.*;

class Mathematic
{
    public boolean Dividation(int No)
    {
        if((No % 3 == 0) && (No % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

class DivisibleBy3and5OrNot
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the number.");
        iNo = sobj.nextInt();

        Mathematic mobj = new Mathematic();
        bRet = mobj.Dividation(iNo);
        if(bRet == true)
        {
            System.out.println(iNo + " number is divisible by 3 and 5.");
        }
        else
        {
            System.out.println(iNo + " number is not divisible by 3 and 5.");
        }


    }
}