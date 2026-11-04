package Estudo1frq;

public class Prob16 {

    static class Aluno {

        private int nota1;
        private int nota2;
        private String Nome = "";

        public Aluno() {
            Nome = "Desconhecido";
            nota1 = 0;
            nota2 = 0;
        }

        public void setNome(String n) {
            Nome = n;
        }

        public String getName() {
            return Nome;

        }

        public void setNotas(int n1, int n2) {
            nota1 = n1;
            nota2 = n2;
        }

        public double getMedia() {
            return ((double) (nota1 + nota2) / 2);
        }

        public boolean isAprovado() {
            return (getMedia() >= 9.5);
        }
    }

    public static void main(String[] args) {

        Aluno aluno1 = new Aluno();
        Aluno aluno2 = new Aluno();

        aluno1.setNome("Ana");
        aluno2.setNome("Rui");

        aluno1.setNotas(14, 15);
        aluno2.setNotas(8, 8);

        String situaçao1;
        if (aluno1.isAprovado()) {
            situaçao1 = "Aprovado";
        } else {
            situaçao1 = "Reprovado";
        }

        String situaçao2;
        if (aluno2.isAprovado()) {
            situaçao2 = "Aprovado";
        } else {
            situaçao2 = "Reprovado";
        }

        System.out.println("Ana: " + aluno1.getMedia() + " - " + situaçao1);
        System.out.println("Rui: " + aluno2.getMedia() + " - " + situaçao2);

    }
}
