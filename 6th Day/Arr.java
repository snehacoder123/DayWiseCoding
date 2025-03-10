import java.util.Scanner;
class Arr{
public static void main(String[] args) {
   Scanner s= new Scanner(System.in);
   int n; 
   int [][]arr = new int[3][3];
   System.out.print("enter 1st element for array : ");
    n=s.nextInt();
     int m=n;
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++){
         arr[i][j]=m;
         m++;
   }
   }
         System.out.println("array in sequence :");
     for(int [] row:arr)
    { 
      for(int ele:row)
   System.out.print(ele+ " ");
         System.out.println();
    
    }   
}
}