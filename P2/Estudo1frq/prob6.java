package Estudo1frq;

import java.text.SimpleDateFormat;
import java.util.Date;

public class prob6 {
    public static void main(String[] args) {
        Date hoje = new Date();
        SimpleDateFormat d1 = new SimpleDateFormat("dd/MM/yyyy");
        SimpleDateFormat d2 = new SimpleDateFormat("MMMM dd, yyyy");

        System.out.println(hoje.toString());
        System.out.println(d1.format(hoje));
        System.out.println(d2.format(hoje));

    }
}
