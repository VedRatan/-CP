import java.util.*;
import java.math.*;

class big_integer
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        //int b=sc.nextInt();
        BigInteger b=new BigInteger(sc.next());
        BigInteger c=new BigInteger(sc.next());
        //BigInteger fac = b.add(c);
        BigInteger fac= BigInteger.ONE;
        for(int i=1;i<=b.intValue();i++)
        {
            fac=fac.multiply(BigInteger.valueOf(i));
        }
        System.out.println(fac);
    }
}