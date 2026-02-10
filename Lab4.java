import java.util.Scanner;

public class Lab4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Please choose an option:");
        System.out.println("1. Motivation");
        System.out.println("2. Humor");
        System.out.println("3. Wisdom");
        System.out.println("4. Exit");
        
        System.out.print("Enter your choice: ");
        int choice = scanner.nextInt();
        
        switch (choice) {
            case 1:
                System.out.println("Believe you can and you're halfway there.");
                break;
            case 2:
                System.out.println("Why did the developer go broke? Because he used up all his cache.");
                break;
            case 3:
                System.out.println("The only true wisdom is in knowing you know nothing.");
                break;
            case 4:
                System.out.println("Goodbye!");
                break;
            default:
                System.out.println("Invalid choice selected.");
        }
        scanner.close();
    }
}
