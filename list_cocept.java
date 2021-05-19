import java.util.*;
class list_cocept
{
    public static void main()
    {
        List<String> list=new ArrayList<String>();
        List<String> list1=new ArrayList<String>();
        list.add("ved");
        list.add("ratan");
        System.out.println(list);
        for(String name:list)
        System.out.println(name+" ");
        System.out.println(list.subList(0,1));//same output
        list1=list.subList(0,1);
        System.out.println(list1);// same output
    }
}