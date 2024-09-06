import java.util.*;

class LengthOfStr
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str;

        System.out.println("Enter the string:");
        str = sobj.nextLine();

        int strlength = str.length();

        System.out.println("Length of string is: "+strlength);
        
    }
}