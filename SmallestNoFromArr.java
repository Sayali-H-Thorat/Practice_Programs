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
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of array:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of array are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
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

    public int SmallestNumber()
    {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
}

class SmallestNoFromArr
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;

        System.out.println("Enter the size of array that you want to create:");
        iLength = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.SmallestNumber();

        System.out.println("Smallest number from array is: "+iRet);
    }
}