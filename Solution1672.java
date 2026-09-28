

public class Solution1672{
    
    
    
    public static void main(String[] args) {
            int arr[][] = { {10,2,31},{40,5,60},{70,8,9}  }; 

            int max  = Integer.MIN_VALUE ;

            //00X 01X 02X 
            //10X X X 
            //20X X X
            int sum = 0; 
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    sum = sum + arr[i][j];
                }
                System.out.println("sum => "+sum);
                sum=0;
            }

            //24 max 

    }   



}