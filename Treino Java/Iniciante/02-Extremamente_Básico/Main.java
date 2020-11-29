import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);
        int a, b, x;
        a = teclado.nextInt();
        b = teclado.nextInt();
        x = a + b;
        System.out.println("X = " + x);
    }
 
}