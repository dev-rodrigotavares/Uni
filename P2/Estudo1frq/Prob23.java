package Estudo1frq;

import java.util.Scanner;

public class Prob23 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        int size;
        double[] notas;
        System.out.print("Insira o tamanho: ");
        size = s.nextInt();
        notas = new double[size];
        double media, sum = 0;
        double maxNota = 0;
        int positivas = 0;

        for (int i = 0; i < notas.length; i++) {

            do {
                System.out.print("Insira a nota: ");
                notas[i] = s.nextDouble();
            } while (notas[i] > 20 || notas[i] < 0);
            sum += notas[i];

            if (maxNota < notas[i]) {
                maxNota = notas[i];
            }
            if (notas[i] >= 10)
                positivas++;
        }
        media = sum / notas.length;

        System.out.println("Media: " + media);
        System.out.println("Mais alta: " + maxNota);
        System.out.println("Positivas: " + positivas);
    }
}
