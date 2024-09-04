import java.util.*;

class CheckSmallOrNot
{
    public char ch;

    public CheckSmallOrNot(char CValue)
    {
        ch = CValue;
    }

    public boolean CheckSmall()
    {
        if((ch >= 'a') && (ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class CheckCharacterSmallOrNot
{
    public static void main(String arg[])
    {
        char cValue;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character:");
        cValue = sobj.nextLine().toCharArray()[0];

        CheckSmallOrNot cobj = new CheckSmallOrNot(cValue);
        
        bRet =cobj.CheckSmall();
        if(bRet == true)
        {
            System.out.println(cValue + " is small case letter.");
        }
        else
        {
            System.out.println(cValue + " is not small case letter.");        }

    }
}