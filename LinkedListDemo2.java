
import java.util.LinkedList;

public class LinkedListDemo2 {
    public static void main(String[] args) {
        
        
        LinkedList<Integer> list = new LinkedList<>(); 

        //50 10 20 30 40   
        list.add(10);
        list.add(20);
        list.addLast(30);
        list.add(40);
        list.addFirst(50);

        System.out.println(list);//50 10 20 30 40 
        list.add(2,200);
        System.out.println(list);//50 10 200 20 30 40 
        //30 replace 300 
        list.set(4, 300);
        System.out.println(list);//50 10 200 20 300 40 


        list.removeFirst();//50 
        list.removeLast(); //40 
        // 10 200 20 300
        System.out.println(list);
        list.remove(2);
        System.out.println(list);

        int sum = 0; 
        for(int x: list){
            sum = sum + x; 
        }
        System.out.println("Sum = "+sum);


    }
}
