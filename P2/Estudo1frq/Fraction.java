package Estudo1frq;

public class Fraction {

    private int numerador;
    private int denominador;

    public Fraction() {
        this(0);
    }

    public Fraction(int n) {
        this(n, 1);
    }

    public Fraction(int n, int d) {
        numerador = n;
        denominador = d;
    }

    public static int gcd(int m, int n) {

        while (n != 0) {
            int resto = m % n;
            m = n;
            n = resto;
        }
        return m;
    }

    public Fraction simplify() {
        int enc = gcd(numerador, denominador);

        Fraction newf = new Fraction(numerador / enc, denominador / enc);
        return newf;

    }

    public Fraction add(Fraction f) {
        int newn = this.numerador * f.denominador + this.denominador * f.numerador;
        int newd = this.denominador * f.denominador;

        Fraction newf = new Fraction(newn, newd);
        return newf;

    }

    public String toText() {
        String frac;
        frac = numerador + "/" + denominador;
        return frac;
    }

}
