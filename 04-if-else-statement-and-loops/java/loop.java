import java.util.Scanner;

public class  loop{
    public static void main(String[] args) {

        //for loop
        //ex=1 =>print coder kamlesh 5 times
        // for(int i=0;i<5;i++){
        //     System.out.println("hello coder kamlesh");
        // }

         // ex=2 => print n natural of number
         //make scanner
         Scanner scanner=new Scanner(System.in);
        //  System.out.println("Give no to print n natural of number: ");
        //  int n=scanner.nextInt();
        //  for(int i=1;i<=n;i=i+1){
        //     System.out.println(i);
        //  }

        //ex=3=>print square
        // System.out.print("Enter the no: ");
        // int n=scanner.nextInt();
        // for (int i = 1; i <= n; i = i + 1) {
        //     System.out.println(i + " Square is: " + (i * i));
        // }

        // ex=4=> print all even no upto n
        System.out.print("Enter the no: ");
        int n=scanner.nextInt();
        for (int i = 1; i <= n; i = i + 1) {
            if(i%2==0){
                System.out.println(i);
            }
        }
    }
}