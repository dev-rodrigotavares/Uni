package Estudo1frq;

import java.util.Scanner;

public class Prob14 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Insere o valor(centimos): ");
        int centimos = s.nextInt();

        int euro2 = centimos / (2 * 100);
        int sobra = centimos % 200;
        int euro1 = sobra / 100;
        sobra = sobra % 100;
        int cent50 = sobra / 50;
        sobra = sobra % 50;
        int cent20 = sobra / 20;
        sobra = sobra % 20;
        int cent10 = sobra / 10;
        sobra = sobra % 10;
        int cent5 = sobra / 5;
        sobra = sobra % 5;
        int cent2 = sobra / 2;
        sobra = sobra % 2;

        System.out.println("2 euros: " + euro2);
        System.out.println("1 euros: " + euro1);
        System.out.println("50 centimos: " + cent50);
        System.out.println("20 centimos: " + cent20);
        System.out.println("10 centimos: " + cent10);
        System.out.println("5 centimos: " + cent5);
        System.out.println("2 centimos: " + cent2);
        System.out.println("1 centimos: " + sobra);

    }
}
