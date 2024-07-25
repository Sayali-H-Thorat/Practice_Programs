import java.util.*;

class DisplayFactors
{
    public void NonFactors(int No)
    {
        int iCnt = 0;

        System.out.println("Non factors of "+No +" are:");
        for(iCnt = 1; iCnt < No; iCnt++)
        {
            if(No % iCnt != 0)
            {
                System.out.println(iCnt+"\t");
            }
        }
    }
}

class NonFactors
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number:");
        iNo = sobj.nextInt();
        
        DisplayFactors dobj = new DisplayFactors();

        dobj.NonFactors(iNo);
    }
}