import java.util.*;

class CountDigits
{
    public void CountOddEven(int No)
    {
        int iDigit = 0;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        if(No < 0)
        {
            No =- No;
        }
        if(No == 1)
        {
            System.out.println("Even Count from number is: 1");
            System.out.println("Odd Count from number is: 0");
            
            return;
        }

        while(No != 0)
        {
            iDigit = No % 10;
            if((iDigit % 2) == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }
            No = No / 10;
        }
        System.out.println("Count of even digits from number is: "+iEvenCnt);
        System.out.println("Count of odd digits from number is: "+iOddCnt);
    }
} 
class CountOddEvenDigits
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();

        CountDigits cobj = new CountDigits();

        cobj.CountOddEven(iNo);
    }
}