package Estudo1frq;

import java.util.Scanner;

public class Prob {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Insira o Nome: ");
            String FullName = scanner.nextLine();

            int n = FullName.indexOf(" ");
            String Nome = FullName.substring(0, n - 1);
            String resto = FullName.substring(n + 1, FullName.length());
            int m = resto.indexOf(" ");
            String Nome2 = resto.substring(0, m - 1);
            String resto3 = resto.substring(m + 1, resto.length());

            System.out.println("Monograma: " + Nome.substring(0, 1) + Nome2.substring(0, 1) + resto3.substring(0, 1));
        }
    }
}
