package Estudo1frq;

import java.util.Scanner;

public class Prob19 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Insira um numero: ");
        int num = s.nextInt();

        for (int i = 0; i <= 10; i++) {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
}
