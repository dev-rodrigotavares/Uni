package Estudo1frq;

import java.util.Scanner;

public class prob3 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Insira o Nome: ");
        String Nome = s.next();

        System.out.print("Insira o Nome: ");
        String Nome2 = s.next();

        System.out.print("Insira o Nome: ");
        String Nome3 = s.next();

        System.out.println("Monograma: " + Nome.substring(0, 1) + Nome2.substring(0, 1) + Nome3.substring(0, 1));
    }
}
