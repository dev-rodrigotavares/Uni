package Estudo1frq;

import java.util.Scanner;

public class prob5 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.print("Insira o seu Email: ");
        String email = s.next();

        String Utilizador = email.substring(0, email.indexOf("@"));
        String Dominio = email.substring(email.indexOf("@") + 1, email.length());

        System.out.println("Utilizador: " + Utilizador);
        System.out.println("Dominio: " + Dominio);

    }
}
