package Estudo1frq;

public class Prob17 {
    public static void main(String[] args) {
        Dice d1 = new Dice();
        Dice d2 = new Dice();

        d1.roll();
        d2.roll();

        int n1 = d1.getNumber();
        int n2 = d2.getNumber();

        System.out.println("Jogador 1: " + n1);
        System.out.println("Jogador 2: " + n2);

        if (n1 > n2) {
            System.out.println("Ganhou o Jogador 1!");
        } else if (n2 > n1) {
            System.out.println("Ganhou o Jogador 2!");
        } else {
            System.out.println("Empate!");
        }
    }
}
