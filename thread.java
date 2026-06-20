import java.util.concurrent.*;

class mythread extends Thread {

    public void run() {

        for (int i = 1; i <= 5; i++) {

            System.out.println(i);
        }
    }
}

public class thread {

    public static void main(String[] args)
            throws Exception {

        mythread t1 = new mythread();

        t1.start();

        t1.join();

        System.out.println("Completed");
    }
}
