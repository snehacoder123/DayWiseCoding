import java.util.Scanner;
public class secondlarge {
    public static void main(String[] args) {
        int n,max=0,max2=0;
            System.out.print("enter size of array: ");
            Scanner s = new Scanner(System.in);
            n=s.nextInt();
            int [] arr=new int[n];
            System.out.print("enter elements: ");
            for(int i=0;i<arr.length;i++)
            arr[i]=s.nextInt();
            System.out.print("array is: ");
           for (int ele:arr) 
           { 
            System.out.print(ele+" ");
            if(ele>max)
            max=ele;}
            System.out.println();
            System.out.print("second largest element is: ");
                for(int ele:arr)
                if(ele>max2 && ele!=max)
                max2=ele;
                System.out.println(max2);
   }
}   
    


