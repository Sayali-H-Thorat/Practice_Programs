import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iNo;

    public ArrayX(int iSize,int No)
    {
        Arr = new int[iSize];
        iNo = No;
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
        for(iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
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

    public boolean CheckOccurrence()
    {
        int iCnt = 0;
        int iFrequency = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                iFrequency++;
            }
        }
        if(iFrequency == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class CheckOccurrenceNoInArr
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iNo = 0;
        boolean bRet = false;

        System.out.println("Enter the size of array that you want to create:");
        iLength = sobj.nextInt();

        System.out.println("Enter the number to check it is present or not in array:");
        iNo = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength,iNo);

        mobj.Accept();
        mobj.Display();

        bRet = mobj.CheckOccurrence();
        if(bRet == true)
        {
            System.out.println(iNo+" is present in an array.");
        }
        else
        {
            System.out.println(iNo+" is not present in an array.");
        }

        
    }
}