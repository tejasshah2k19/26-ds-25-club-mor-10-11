
import java.util.ArrayList;

public class ArrayListDemo {

    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<Integer>();//int 

        //a[0] = 10 
        list.add(10); //0th index 
        list.add(20);//1st index 
        list.add(30);//2nd index

        //total items 
        System.out.println("size => " + list.size());//3 

        //print
        //get()
        System.out.println(list.get(0));//10
        System.out.println(list.get(1));//20

        //loop 
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));//
        }

    }
}
