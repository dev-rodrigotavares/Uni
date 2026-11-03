package Estudo1frq;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

class Prob7 {
    public static void main(String[] args) {

        try (Scanner scanner = new Scanner(System.in)) {
            Date hoje = new Date();
            SimpleDateFormat d1 = new SimpleDateFormat("dd/MM/yyyy");

            System.out.print("Insita o Nome: ");
            String nome = scanner.nextLine();
            System.out.print("Insita o Apelido: ");
            String apelido = scanner.nextLine();

            String monograma = nome.substring(0, 1) + apelido.substring(0, 1);

            System.out.print("Insita o Curso: ");
            String curso = scanner.nextLine();

            System.out.println("==========================");
            System.out.println("Aluno: " + apelido + ", " + nome + " (" + monograma + ")");
            System.out.println("Curso: " + curso);
            System.out.println("Email: " + nome.toLowerCase() + "." + apelido.toLowerCase() + "@uevora.pt");
            System.out.println("Emitido em: " + d1.format(hoje));
            System.out.println("==========================");
        }
    }
}
