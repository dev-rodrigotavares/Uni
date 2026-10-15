import java.util.Scanner;

public class Aula3{

    public static void main(String[] args){

        Scanner s = new Scanner(System.in);
        System.out.print("Temperatura em Celsius! ");
        double c = Double.parseDouble(s.next());

        double f = 1.8 *c + 32;
        System.out.println(c + " C = " +f + "f");
    }
}