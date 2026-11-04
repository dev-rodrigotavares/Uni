package Estudo1frq;

import java.util.Scanner;

public class Prob21 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int num, sum = 0, i = -1;

        do {
            System.out.print("Numero (0 para terminar): ");
            num = s.nextInt();
            sum += num;
            i++;
        } while (num != 0);

        double media;
        if (i == 0) {
            media = 0;
        } else {
            media = (double) sum / i;
        }

        System.out.println("Soma: " + sum + "| Quantidade: " + i + "| Media: " + media);
    }
}
