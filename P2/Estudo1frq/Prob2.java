package Estudo1frq;

import java.util.Scanner;

public class Prob2 {

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {

            System.out.print("Insira o Nome: ");
            String FullName = scanner.nextLine().trim();

            String[] nomes = FullName.split("\\s+");
            String monograma = "";
            for (int i = 0; i < nomes.length; i++) {
                String nome = nomes[i];
                if (Character.isUpperCase(nome.charAt(0)))
                    monograma += nome.charAt(0);
            }

            System.out.println("Monograma: " + monograma);
        }
    }
}
