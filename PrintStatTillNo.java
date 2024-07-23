import java.util.*;

class PrintStat
{
    public void Display(int No)
    {
        int iCnt = 0;

        iCnt = 1;
        while(iCnt <= No)
        {
            System.out.println("Welcome to java Programming...");
            iCnt++;
        }
    }

}

class PrintStatTillNo
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter the number of iteration you want");
        iNo = sobj.nextInt();

        PrintStat obj = new PrintStat();

        obj.Display(iNo);
    }
}