import java.util.Scanner;

public class if_else {
    public static void main(String[] args) {

        // Create a Scanner object to read input from the user
        Scanner scanner =new Scanner(System.in);

        // System.out.println("Enter Package Amount: ");
        // int packageValue=scanner.nextInt();
        // scanner.close();

        // if (packageValue > 10) {
        //     System.out.println("Accepted");
        // } else {
        //     System.out.println("Rejected");
        // }

        
                    // System.out.print("Enter your marks: ");
                    // int marks = scanner.nextInt();
            
                    // // Close the Scanner to avoid resource leak (not strictly necessary in this case)
                    // scanner.close();
            
                    // // Check the condition and print the result
                    // if (marks > 33) {
                    //     System.out.println("pass");
                    // } else {
                    //     System.out.println("fail");
                    // }

    // Prompt the user to enter the first number
    // System.out.print("Enter your first number: ");
    // int a = scanner.nextInt();

    // // Prompt the user to enter the second number
    // System.out.print("Enter your second number: ");
    // int b = scanner.nextInt();

    // // Close the Scanner to avoid resource leak (not strictly necessary in this case)
    // scanner.close();

    // // Check the condition and print the result
    // if (a > b) {
    //     System.out.println("yes");
    // } else {
    //     System.out.println("no");
    // }
        
    // System.out.print("Enter a number to check even or odd: ");
    // int num = scanner.nextInt();

    // // Close the Scanner to avoid resource leak (not strictly necessary in this case)
    // scanner.close();

    // // Check if the number is even or odd and print the result
    // if (num % 2 == 0) {
    //     System.out.println("Entered number is Even");
    // } else {
    //     System.out.println("Entered number is Odd");
    // }

    // Check age and categorize
    // System.out.print("Enter your age: ");
    // int age = scanner.nextInt();

    // if (age > 18) {
    //     System.out.println("You are an adult");
    // } else {
    //     System.out.println("You are a teenager");
    // }

    // Check whether the number is positive, negative, or zero
    // System.out.print("Enter number: ");
    // int num = scanner.nextInt();

    // if (num > 0) {
    //     System.out.println("Positive");
    // } else if (num == 0) {
    //     System.out.println("Zero");
    // } else {
    //     System.out.println("Negative");
    // }

    System.out.print("Enter character to check vowel or consonant: ");
        char c = scanner.next().charAt(0);

        if(c=='a')
        System.out.print("vowel");
        else if(c=='e')
        System.out.print("vowel");
        else if(c=='i')
        System.out.print("vowel");
        else if(c=='o')
        System.out.print("vowel");
        else if(c=='u')
        System.out.print("vowel");
        else
        System.out.println("consonants");



    }
}
