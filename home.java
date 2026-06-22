import java.util.*;
import java.util.Scanner;
class eg {
    void display() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number:");
    int a = sc.nextInt();

    System.out.println("Print: "+ (a+2));
    sc.close();
    }
}
public class home {
    public static void main(String[] args) {
        eg obj = new eg();
        obj.display();
        System.out.println("Program executed");

        try {
            int b = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero");
        }
    }
}
//Output: Program executed 
//Cannot divide by zero