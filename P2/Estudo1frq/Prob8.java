package Estudo1frq;

import java.util.Scanner;

import javax.swing.JFrame;

public class Prob8 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);
        System.out.print("Titulo da janela: ");
        String titulo = s.next();

        JFrame janela; // 1. declarar o nome
        janela = new JFrame(); // 2. criar o objeto

        janela.setSize(400, 150); // 3. enviar mensagens
        janela.setTitle(titulo);
        janela.setVisible(true);
    }
}
