package Estudo1frq;

import java.util.Scanner;

import Estudo1frq.Prob16.Aluno;

public class Prob24 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        Aluno[] alunos = new Aluno[3];
        alunos[0] = new Aluno();
        alunos[1] = new Aluno();
        alunos[2] = new Aluno();

        alunos[0].setNome("Joao");
        alunos[1].setNome("Maria");
        alunos[2].setNome("Felipe");

        alunos[0].setNotas(15, 16);
        alunos[1].setNotas(19, 18);
        alunos[2].setNotas(12, 8);

        double melhorMedia = alunos[0].getMedia();
        int iMelhorMedia = 0;

        for (int i = 1; i < alunos.length; i++) {
            if (alunos[i].getMedia() > melhorMedia) {
                iMelhorMedia = i;
                melhorMedia = alunos[i].getMedia();
            }
        }

        System.out.print("Insere um nome: ");
        String nome;
        nome = s.next();
        boolean encontrado = false;

        for (int i = 0; i < alunos.length; i++) {
            if (alunos[i].getName().equals(nome)) {
                System.out.println("Aluno " + nome + " encontrado!");
                encontrado = true;
            }
        }

        if (!encontrado) {
            System.out.println("Aluno nao existe!");

        }

        System.out.println("Melhor media é " + melhorMedia + " do Aluno " + alunos[iMelhorMedia].getName());

    }
}
