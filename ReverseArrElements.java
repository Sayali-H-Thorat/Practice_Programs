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
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of array are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
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
    public void DisplayReverse()
    {
        int iCnt = 0;

        System.out.println("Reverse elements of array are:");

        for(iCnt = Arr.length -1; iCnt >= 0; iCnt--)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

    }
}

class ReverseArrElements
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;

        System.out.println("Enter the size of array that you want to create:");
        iLength = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength);

        mobj.Accept();
        mobj.Display();
        mobj.DisplayReverse();
    }
}