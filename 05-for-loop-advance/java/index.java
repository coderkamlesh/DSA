import java.util.Scanner;

public class index{
    public static void main(String[] args){
        //print 101 to 200
        // for(int i=101;i<=200;i=i+1){
        //     System.out.print(i+ " ");
        // }

        //ex=2 => print a to z
    // for(char name='a';name<='z';name=(char)(name+1)){
    //     System.out.print(name+ " ");
    // }

    // try (Scanner scanner = new Scanner(System.in)) {
    //     System.out.print("Enter the number: ");
    //     int n=scanner.nextInt();
    //     for(int i=n;i>=1;i=i-1){
    //         System.out.print(i+" ");
    //     }
    // }

    
    //ex=4 print 1 to 100 in this order 1,4,7,10,13
    // for(int i=1;i<=100;i=i+3){
    //     System.out.print(i+" ");
    // }


     //print table of n;
    //  Scanner scanner=new Scanner(System.in);
    //  System.out.print("Enter the no: ");
    //  int n=scanner.nextInt();
     
     
    //  for(int i=1;i<=10;i=i+1){
    //      System.out.println(n*i);
    //  }
    //  scanner.close();

    //ex=6=>print power of n;
    // Scanner scanner = new Scanner(System.in);

    // // Prompt the user to enter the number
    // System.out.print("Enter the number: ");
    // int n = scanner.nextInt();

    // // Prompt the user to enter the power
    // System.out.print("Enter the power: ");
    // int pow = scanner.nextInt();

    // // Calculate the power of n
    // int result = 1;
    // for (int i = 1; i <= pow; i++) {
    //     result *= n;
    // }

    // // Print the result
    // System.out.println(result);

    // // Close the Scanner to avoid resource leak
    // scanner.close();


    // ex=7 => sum of n natural number
    // Scanner scanner = new Scanner(System.in);

    //     // Prompt the user to enter the number
    //     System.out.print("Enter the number: ");
    //     int n = scanner.nextInt();

        // Calculate the sum of the first n natural numbers
        // int sum = 0;
        // for (int i = 1; i <= n; i++) {
        //     sum += i;
        // }

        // // Print the result
        // System.out.println(sum);

        //ex=8=>factorial num

        // Scanner scanner = new Scanner(System.in);

        // // Prompt the user to enter the number
        // System.out.print("Enter the number: ");
        // int n = scanner.nextInt();

        // int fact=1;
        // for(int i=1;i<=n;i=i+1){
        //     fact=fact*i;
        // }
        // System.out.println(fact);

        // Close the Scanner to avoid resource leak

        //-------------
        //prime number
        //-------------
        // Scanner scanner = new Scanner(System.in);

        // // Prompt the user to enter the number
        // System.out.print("Enter the number: ");
        // int n = scanner.nextInt();

        // if(n<2){
        //     System.out.println("not prime");
        //     return;
        // }else{
        //     for(int i=2;i<n;i++){
        //         if(n%i==0){
        //             System.out.println("Not prime");
        //             return;
        //         }
        //     }
        //     System.out.println("prime");
        // }


        //-----------
        //fibonacci series
        //-----------

        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the number
        System.out.print("Enter the number: ");
        int n = scanner.nextInt();

        System.out.println("Fibonacci Series up to " + n + " terms:");
        int last=0;
        int prev=1;
        int curr=0;
        for(int i=1;i<=n;i++){
        System.out.print(last+ " ");

            curr=last+prev;
            last=prev;
            prev=curr;
        }

        scanner.close();
    }
}