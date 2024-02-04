import java.util.Scanner;

public class index{
    public static void main(String[] args) {
        System.out.println("hello");
        // Create a Scanner object to read input from the user
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter the first integer
        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();

        // Prompt the user to enter the second integer
        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();

        // Close the Scanner to avoid resource leak (not strictly necessary in this case)
        scanner.close();

        // Calculate and print the sum
        System.out.println("Sum: " + (a + b));
    }
}

