import java.util.*;
public class chatroom
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        Character[] hello = {'h', 'e', 'l', 'l', 'o'};
        int index = 0;
        char c1 = hello[index];
        for (char c : s.toCharArray()) {
            if (c == c1 && index == 4) {
                System.out.println("YES");
                return;
            } else if (c == c1) {
                index++;
                c1 = hello[index];
            }
        }
        System.out.println("NO");
    }
}