import java.util.*;

class PrimeNo
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int flag = 0;
        int iCnt = 0;

        System.out.println("Enter the number to chek whether it is prime or not: ");
        iNo = sobj.nextInt();

        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt ==0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            System.out.println(iNo+" is Prime number.");
        }
        else
        {
            System.out.print(iNo+" is not a prime number.");
        }
    }
}