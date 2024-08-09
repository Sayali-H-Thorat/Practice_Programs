import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iNo;

    public ArrayX(int iSize,int No)
    {
        Arr=new int[iSize];
        iNo = No;
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
        for(iCnt = 0; iCnt  < Arr.length; iCnt++)
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

    public int CalculateFrequency()
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
        return iFrequency;
    }
}

class FrequencyOfNoInArr
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;
        int iNo = 0;

        System.out.println("Enter the size of array that you want to create:");
        iLength = sobj.nextInt();

        System.out.println("Enter the number to find frequency in an array:");
        iNo = sobj.nextInt();

        MarvellousX mobj = new MarvellousX(iLength,iNo);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.CalculateFrequency();

        System.out.println("Frequency of "+iNo+" number is: "+iRet);

    }
}