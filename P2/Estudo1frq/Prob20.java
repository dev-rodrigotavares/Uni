package Estudo1frq;

import java.util.Scanner;

public class Prob20 {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        double nota, nota2;

        do {
            System.out.print("Insira uma nota: ");
            nota = s.nextDouble();
        } while (nota < 0 || nota > 20);

        System.out.print("Insira uma nota: ");
        nota2 = s.nextDouble();

        while (nota2 > 20 || nota2 < 0) {

            System.out.print("Insira uma nota: ");
            nota2 = s.nextDouble();
        }
    }
}
