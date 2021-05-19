import java.util.*;
class character_input_format
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int steps=sc.nextInt();
        char a[]=new char[steps];
        for(int i=0;i<steps;i++)
        a[i]=sc.next().charAt(0);
        for(int i=0;i<steps;i++)
        System.out.println(a[i]);
}
}