
import java.util.Scanner;
import java.util.Stack;

public class StackDemo {

    public static void main(String[] args) {

        Stack<Character> s = new Stack<>();

        // s.push('R');
        // s.push('o');
        // s.push('y');
        // s.push('a');
        // s.push('l');
        Scanner scr = new Scanner(System.in);
        System.out.println("enter string : ");
        String str = scr.next();//r:0 o:1 y:2 a:3 l:4  

        for (int i = 0; i < str.length(); i++) {
            s.push(str.charAt(i));
        }

        //isEmpty
        //push
        //pop
        //size 
        while (s.isEmpty() == false) { //false f f f f true   
            System.out.print(s.pop());//l a y o r
        }

    }
}
