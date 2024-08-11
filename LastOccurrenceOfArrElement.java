import java.util.*;

class ArrayX
{
    public int Arr[];
    int iNo;

    public ArrayX(int iSize, int iValue)
    {
        Arr = new int[iSize];
        iNo = iValue;
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
            System.out.print(Arr[iCnt]+"\n");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize,int iNo)
    {
        super(iSize,iNo);
    }

    public int LastOccurrence()
    {
        int iCnt = 0; 

        for(iCnt = Arr.length -1; iCnt >= 0; iCnt--)
        {
            if(Arr[iCnt] == iNo)
            {
                break;
            }
        }

        if(iCnt == -1)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }

}

class LastOccurrenceOfArrElement
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the size of array that you want to create:");
        iLength = sobj.nextInt();

        System.out.println("Enter the number to check last occurrence:");
        iNo = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength,iNo);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.LastOccurrence();
        if(iRet == -1)
        {
            System.out.println(iNo+" number is not present in an array.");
        }
        else
        {
            System.out.println(iNo+" number is present at "+iRet+" position.");
        }
    }
}