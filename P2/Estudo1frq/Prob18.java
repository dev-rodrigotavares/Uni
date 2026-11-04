package Estudo1frq;

import java.text.DecimalFormat;

public class Prob18 {
    public static void main(String[] args) {

        Produto p1 = new Produto();

        DecimalFormat df = new DecimalFormat("0.00");

        p1.setName("Arroz");
        p1.setPreco(8.73);
        p1.setCategoria(Produto.Categoria.ALIMENTAR);

        System.out.println("Preço final de " + p1.getName() + " é " + df.format(p1.getPrecoFinal()));
    }
}
