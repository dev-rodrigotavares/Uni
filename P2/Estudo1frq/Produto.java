package Estudo1frq;

public class Produto {
    public static enum Categoria {
        ALIMENTAR, RESTAURACAO, NORMAL
    }

    private String nome;
    private double preco;
    private Categoria categoria;

    private static final double TA = 1.08;
    private static final double TR = 1.16;
    private static final double TN = 1.23;

    public Produto() {
        nome = "desconhecido";
        preco = 0.00;
        categoria = Categoria.NORMAL;
    }

    public void setName(String nome) {
        this.nome = nome;
    }

    public String getName() {
        return nome;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public void setCategoria(Categoria categoria) {
        this.categoria = categoria;
    }

    public double getPrecoFinal() {

        switch (categoria) {
            case ALIMENTAR:
                return preco * TA;
            case RESTAURACAO:
                return preco * TR;
            default:
                return preco * TN;
        }
    }

}
