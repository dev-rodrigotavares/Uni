package Estudo1frq;

import java.util.Scanner;

public class Prob10 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Insira o numero de segundos: ");
        int segundos = s.nextInt();
        int horas = segundos / 3600;
        int minutos = (segundos - (horas * 3600)) / 60;
        int segunDos = (segundos - (minutos * 60) - (horas * 3600));

        System.out.println(horas + "h " + minutos + "m " + segunDos + "s");

    }
}
