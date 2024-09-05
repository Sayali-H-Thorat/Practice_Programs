import java.util.*;


class CheckDigitOrNotX
{
    public char Ch;

    public CheckDigitOrNotX(char CValue)
    {
        Ch = CValue;
    }

    public boolean CheckDigit()
    {
        if((Ch >= '0') && (Ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class CheckDigitOrNot
{
    public static void main(String arg[])
    {
        char cValue;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character:");
        cValue = sobj.nextLine().toCharArray()[0];

        CheckDigitOrNotX cobj = new CheckDigitOrNotX(cValue);
        bRet = cobj.CheckDigit();
        if(bRet == true)
        {
            System.out.println(cValue + " is a digit.");
        }
        else
        {
            System.out.println(cValue + " is not digit.");
        }
    }
}