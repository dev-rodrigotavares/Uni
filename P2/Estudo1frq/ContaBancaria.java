package Estudo1frq;

public class ContaBancaria {
    private double saldo;

    public ContaBancaria() {
        saldo = 0.0;
    }

    public void depositar(int x) {
        if (x <= 0) {
            System.out.println("Valor nao permitido");
        } else {
            saldo += x;
        }
    }

    public void levantar(int x) {
        if (saldo >= x) {
            saldo -= x;
        } else {
            System.out.println("Saldo Insuficiente");
        }
    }
}
