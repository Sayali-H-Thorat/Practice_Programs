import java.util.*;

class DisplayFullName
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str;

        System.out.println("Enter your full name:");
        str= sobj.nextLine();

        System.out.println("Hii "+ str);
    }
}