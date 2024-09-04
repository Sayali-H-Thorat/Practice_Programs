import java.util.*;

class CheckCapitalOrNot
{
    public char Ch;

    public CheckCapitalOrNot(char CValue)
    {
        Ch = CValue;
    }

    public boolean CheckCapital()
    {
        if((Ch >= 'A') && (Ch <= 'Z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class CheckCharacterCapitalOrNot
{
    public static void main(String arg[])
    {
        char cValue;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character:");
        cValue = sobj.nextLine().toCharArray()[0];

        CheckCapitalOrNot cobj = new CheckCapitalOrNot(cValue);

        bRet = cobj.CheckCapital();

        if(bRet == true)
        {
            System.out.println(cValue + " is Capital case letter.");
        }
        else
        {
            System.out.println(cValue + " is not capital case letter.");
        }
    }
}