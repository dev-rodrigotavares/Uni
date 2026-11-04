package Estudo1frq;

public class Dice {
    private static final int MIN_NUMBER = 1;
    private static final int MAX_NUMBER = 6;
    private static final int NO_NUMBER = 0;

    private int number;

    public Dice() {
        number = NO_NUMBER;
    }

    public void roll() {
        number = (int) (Math.random() * (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
    }

    public int getNumber() {
        return number;
    }
}
