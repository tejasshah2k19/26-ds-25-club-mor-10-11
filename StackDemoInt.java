
import java.util.Stack;

public class StackDemoInt {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();


        stack.push(10);
        stack.push(20);
        stack.push(30);

        System.out.println(stack);

        System.out.println(stack.peek());//30 

        System.out.println(stack.isEmpty());//false 

        System.out.println("print all : ");
        while(!stack.isEmpty()){ 
            int tmp = stack.pop();//10 20 30  
            System.out.println(tmp);
        }
        
    }
}
