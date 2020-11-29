import java.io.IOException;
import java.util.*;
import java.math.*;
 

public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner teclado = new Scanner(System.in);
        
        double n = 3.14159;
        double raio;
        double area;

        raio = teclado.nextDouble();

        area = n * Math.pow(raio,2);

        System.out.printf("A=%.4f %n", area);
    }
 
}