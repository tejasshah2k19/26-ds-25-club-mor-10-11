import java.util.LinkedList; 
import java.util.Scanner;

public class LinkedListTask {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in); 
        LinkedList<Integer> list = new LinkedList<>();

        for(int i=1;i<=7;i++){
            System.out.println("Enter value :");
            int num = scr.nextInt();
            list.add(num);
        }

        int sum = 0 ;
        for(int x: list){
            sum = sum + x; 
        }
        System.out.println("Sum = "+sum);


        

    }
}
