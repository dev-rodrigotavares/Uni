package Estudo1frq;

import java.util.Calendar;
import java.util.GregorianCalendar;

public class Prob15 {
    public static void main(String[] args) {

        GregorianCalendar hoje = new GregorianCalendar();

        int diaAno = hoje.get(Calendar.DAY_OF_YEAR);
        int falta = 365 - diaAno;

        int nSorte = (int) (Math.random() * 100) + 1;
        System.out.println("Hoje: " + hoje.get(Calendar.DAY_OF_MONTH) + "/" + (hoje.get(Calendar.MONTH) + 1) + "/"
                + hoje.get(Calendar.YEAR));
        System.out.println("Dia do ano: " + diaAno);
        System.out.println("faltam " + falta + " dias para o fim do ano");
        System.out.println("Numero da sorte: " + nSorte);
    }
}
