import java.util.*;

class FactorsNo
{
    public void FactorsNo(int No)
    {
        int iCnt = 0;

        System.out.println("Factors of "+No +" is:");
        for(iCnt = 1; iCnt <= (No/2); iCnt++)
        {
            if(No % iCnt == 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
}


class Factors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter the number to find factors:");
        iNo = sobj.nextInt();

        FactorsNo fobj = new FactorsNo();

        fobj.FactorsNo(iNo);

    }
}