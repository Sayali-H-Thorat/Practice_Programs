import java.util.*;

class DisplayReverse
{
    public void Reverse(int No)
    {
        int iCnt = 0;

        System.out.println("Reverse numbers are:");
        for(iCnt = No; iCnt >=1; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
    }
}

class ReverseNoTill1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        DisplayReverse dobj = new DisplayReverse();

        dobj.Reverse(iNo);

    }
}