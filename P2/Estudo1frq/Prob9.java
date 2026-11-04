package Estudo1frq;

import java.text.DecimalFormat;
import java.util.Scanner;

public class Prob9 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Insira Nota 1: ");
        int nota1 = s.nextInt();
        System.out.print("Insira Nota 2: ");
        int nota2 = s.nextInt();
        System.out.print("Insira Nota 3: ");
        int nota3 = s.nextInt();

        float res = (float) (nota1 + nota2 + nota3) / 3;
        DecimalFormat d = new DecimalFormat("0.00");
        System.out.println("Media: " + d.format(res));

    }
}
