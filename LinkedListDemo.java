import java.util.LinkedList; 
public class LinkedListDemo{

    public static void main(String[] args) {
        //LinkedList

        LinkedList<Integer> list = new LinkedList<>();
    
        //10 20 30 40 // insert at end 
        list.add(10);//[10]
        list.add(20);//[10] [20]
        list.add(30);//[10][20][30]
        list.addLast(40);//[10][20][30][40]

        System.out.println(list);//[ 10 20 30 40 ]

        System.out.println("Linked List => ");
        for(Integer data : list){
            System.out.println(data);
        }

        //random 
        //insert at beg 
        //10 20 30 40 
        list.addFirst(50);
        //50 10 20 30 40 
        //insert at any -- index
        list.add(2,500);//second index insert 500 
        //50 10 500 20 30 40 
         
    
        //50 10 500 20 30 40 
        System.out.println("Linked List => ");
        for(Integer data : list){
            System.out.println(data);
        }


        //delete ==> 

        //last remove 
        //50 10 500 20 30 40 
        list.removeLast();//40 remove 
        //50 10 500 20 30   

        //beg remove 
        //50 10 500 20 30  
        list.remove(); // 50 remove 
        list.removeFirst();//10 remove 
        //500 20 30  

        //any --- index remove
        //500 20 30  
        list.remove(1);//first index remove 
        //500 30  
        
        //500 30 
        System.out.println("Linked List => ");
        for(Integer data : list){
            System.out.println(data);
        }




    }
}