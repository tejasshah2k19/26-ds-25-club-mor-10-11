
import java.util.Scanner;
import java.util.Stack;

public class StackMax {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();

        Scanner scr = new Scanner(System.in);
        int tmp;

        for (int i = 1; i <= 5; i++) {
            System.out.println("Enter value : ");
            tmp = scr.nextInt();
            stack.push(tmp);
        }

        int max = stack.pop();

        while (!stack.isEmpty()) {
            tmp = stack.pop();

            if (tmp > max) {
                max = tmp;
            }

        }
        System.out.println("Max : "+max);
    }
}
