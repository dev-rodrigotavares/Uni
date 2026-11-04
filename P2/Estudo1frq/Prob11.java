package Estudo1frq;

import java.util.Scanner;

public class Prob11 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        final double PI = 3.1415;

        System.out.print("Insere o raio: ");
        double raio = s.nextDouble();

        double res = PI * Math.pow(raio, 2);
        System.out.println(res);
    }
}
