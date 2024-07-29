import java.util.*;

class DisplayFactors
{
    public void OddFactors(int No)
    {
        int iCnt = 0;

        System.out.println("Factors of "+No+" are:");
        for(iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No %iCnt ==0)
            {
                System.out.print(iCnt+"\t");
            }
        }
        System.out.println();

        System.out.println("Odd factors of "+No+" are:");
        for(iCnt =1; iCnt <= (No/2); iCnt++)
        {
            if((No % iCnt ==0)&&(iCnt %2 != 0))
            {
                System.out.print(iCnt+"\t");
            }
        }


    }
}

class OddFactors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0; 

        System.out.println("Enter the number to find odd factors:");
        iNo = sobj.nextInt();

        DisplayFactors dobj = new DisplayFactors();

        dobj.OddFactors(iNo);
    }
}