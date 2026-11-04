package Estudo1frq;

import java.util.Scanner;

public class Prob22 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int c;
        int n1, n2;
        boolean is;

        do {
            System.out.println("1 - Somar dois numeros");
            System.out.println("2 - Multiplicar dois numeros");
            System.out.println("0 - Sair");
            System.out.print("Opcao: ");
            c = s.nextInt();

            switch (c) {

                case 0:
                    is = false;
                    break;

                case 1:
                    System.out.print("Insira o primeiro valor: ");
                    n1 = s.nextInt();
                    System.out.print("Insira o segundo valor: ");
                    n2 = s.nextInt();
                    System.out.println(n1 + n2);
                    is = true;
                    break;

                case 2:
                    System.out.print("Insira o primeiro valor: ");
                    n1 = s.nextInt();
                    System.out.print("Insira o segundo valor: ");
                    n2 = s.nextInt();
                    System.out.println(n1 * n2);
                    is = true;
                    break;

                default:
                    is = true;

            }
        } while (is);
    }
}
