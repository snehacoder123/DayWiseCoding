import java.util.Scanner;
public class average {
    public static void main(String[] args) {
        int n,b=0;
        System.out.print("enter size of array: ");
        Scanner s = new Scanner(System.in);
        n=s.nextInt();
        int [] arr=new int[n];
        System.out.print("enter elements: ");
        for(int i=0;i<arr.length;i++)
        arr[i]=s.nextInt();
        System.out.print("array is: ");
       for (int ele:arr) {
        System.out.print(ele+" ");
        b+=ele;}
        System.out.println();
     System.out.print("average is: ");
         System.out.println(b/n);
       }
}
