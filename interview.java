import java.util.*;
class interview
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of the array");
        int n=sc.nextInt();
        int t=n-1;
        int c=0;
        int a[]=new int[n];
        int b[]=new int[n];
        System.out.println("enter "+n+" elements of the array");
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        int temp;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                b[t]=0;
                t--;
            }
            else
            {
                b[c]=a[i];
                c++;
            }
        }
        for(int i=0;i<n;i++)
        System.out.print(b[i]+" ");
    }
}