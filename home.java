import java.util.*;

public class home {
    public static void main(String[] args) {
        System.out.println("Program executed");

        try {
            int a = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero");
        }
    }
}
