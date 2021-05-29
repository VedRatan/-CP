import java.util.*;
class linkedlist
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        linkedlist list=new linkedlist();
        boolean flag=true;
        int p;
        while(flag)
        {
            int pos;
            int n;
            System.out.println();
            System.out.println("1. Add item to the list at starting");
            System.out.println("2. Add item to the list at the end");
            System.out.println("3. Add item to the list at any position");
            System.out.println("4. delete first node");
            System.out.println("5. delete last node");
            System.out.println("6. delete the node at any pos");
            System.out.println("7. view size of the list");
            System.out.println("8. view list");
            System.out.println("9. exit");
            System.out.print("enter your choice: ");
            System.out.println();
            p=sc.nextInt();
            switch(p)
            {
                case 1:System.out.print("enter the value of the item: ");
                n=sc.nextInt();
                list.insertatfirst(n);
                break;
                case 2:System.out.print("enter the value of the item: ");
                n=sc.nextInt();
                list.insertatlast(n);
                break;
                case 3:System.out.print("enter the value of the item: ");
                n=sc.nextInt();
                System.out.print("enter the position where you want to insert a node: ");
                pos=sc.nextInt();
                list.insertatpos(n,pos);
                break;
                case 4:list.deletefirst();
                break;
                case 5:list.deletelast();
                break;
                case 6:System.out.print("enter the position of the node to be deleted");
                pos=sc.nextInt();
                list.deleteatpos(pos);
                break;
                case 7:int q=list.getsize();
                System.out.println("the size of the list is: "+q);
                break;
                case 8:list.viewlist();
                break;
                case 9:flag=false;
            }
        }
    }
}
class node
{
    private int data;
    private node next;
    public node()
    {
        data=0;
        next=null;
    }
    public node(int d, node n)
    {
        data=d;
        next=n;
    }
    public void setdata(int d)
    {
        data=d;
    }
    public void setnext(node n)
    {
        next=n;
    }
    public int getdata()
    {
        return data;
    }
    public node getnext()
    {
        return next;
    }
}
class linkedlist
{
    private int size;
    private node start;
    public void insertatfirst(int val)
    {
        node n=new node();
        n.setdata(val);
        n.setnext(start);
        start=n;
        size++;
    }
    public void insertatlast(int val)
    {
        node t;
        node n=new node();
        n.setdata(val);
        t=start;
        if(t==null)
        {
            start=n;
        }
        else
        {
            while(t.getnext()!=null)
            t=t.getnext();
            t.setnext(n);
        }
        size++;
    }
    public void insertatpos(int val, int pos)
    {
    
        if(pos==1)
        {
            insertatfirst(val);
        }
        else if(pos==size+1)
        {
            insertatlast(val);
        }
        else if(pos>1&&pos<=size)
        {
            node t;
            node n=new node(val,null);
            t=start;
            for(int i=1;i<pos-1;i++)
                t=t.getnext();
            n.setnext(t.getnext()); 
            t.setnext(n);
             size++;
        }
       else
       System.out.println("the element can't be inserted");
    }
    public void deletefirst()
    {
        if(start==null)
        System.out.println("the list is already empty");
        else
        {
            start=start.getnext();
            size--;
        }
    }
    public boolean isempty()
    {
        if(start==null)
        return true;
        else
        return false;
    }
    public void deletelast()
    {
        if(start==null)
        System.out.println("the list is already empty");
        else if(size==1)
        {
            start=null;
            size--;
        }
        else
        {
            node t=start;
            for(int i=1;i<size-1;i++)
                t=t.getnext();
            t.setnext(null);
            size--;
        }
    }
    public void deleteatpos(int pos)
    {
        if(pos==1)
        deletefirst();
        else if(pos==size)
        deletelast();
        else if(pos<1||pos>size)
        System.out.println("invalid position");
        else
        {
            node t=start;
            node t1;
            for(int i=1;i<pos-1;i++)
            t=t.getnext();
            t1=t.getnext();
            t.setnext(t1.getnext());
            size--;
        }
    }
    public int getsize()
    {
        return size;
    }
    public void viewlist()
    {
        node t;
        if(isempty()==true)
        System.out.println("the list is empty");
        else
        {
            t=start;
            while(t!=null)
            {
                System.out.print(" "+t.getdata());
                t=t.getnext();
            }
        }
    }
}
