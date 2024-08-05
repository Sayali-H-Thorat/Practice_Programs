import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
        System.out.println("Enter the elements of array:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        System.out.println("Elements of array are:");
        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public float Average()
    {
        int iCnt = 0;
        int iSum = 0;
        float Avg = 0.0f;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        Avg = iSum/Arr.length;
        return Avg;
    }
}

class AvgOfArrNElements
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        float fRet = 0.0f;

        System.out.println("Enter the number of elements that you want to store in an array:");
        iLength = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength);

        mobj.Accept();
        mobj.Display();

        fRet = mobj.Average();

        System.out.println("Average of array elements is : "+fRet);
    }
}