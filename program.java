import java.util.Scanner;
import java.util.*;
class calc {
    int add(int a, int b){
        return a+b;
    }
}
class program {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        calc obj = new calc();
        System.out.println("addition of 2 numbers:"+obj.add(4,6));
        sc.close();
    }
}