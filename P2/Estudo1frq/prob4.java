package Estudo1frq;

import java.util.Scanner;

public class prob4 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Insira o Nome: ");
        String Nome = s.next();

        System.out.print("Insira o Apelido: ");
        String Apelido = s.next();

        int total = Nome.length() + Apelido.length();

        System.out.println(Apelido + ", " + Nome);
        System.out.println("Total de letras: " + total);
    }
}
