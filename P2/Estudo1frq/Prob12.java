package Estudo1frq;

import java.text.DecimalFormat;
import java.util.Scanner;

public class Prob12 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Insere o primeiro Cateto: ");
        double c1 = s.nextDouble();
        System.out.print("Insere o segundo Cateto: ");
        double c2 = s.nextDouble();

        double h = Math.sqrt(Math.pow(c1, 2) + Math.pow(c2, 2));

        DecimalFormat d = new DecimalFormat("0.00");
        System.out.println(d.format(h));
    }

}
