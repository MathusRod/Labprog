import java.util.*;

class Imprime {
    int num1;
    int num2;
    int num3;

    void imprimeIndicadores() {
        System.out.println("Número 1: " + num1);
        System.out.println("Número 2: " + num2);
        System.out.println("Número 3: " + num3);
    }
}

public class Indicadores {
    public static void main(String[] args) {
        Scanner texto = new Scanner(System.in);
        Imprime valores = new Imprime();
        System.out.print("Digite um número: ");
        valores.num1 = texto.nextInt();
        System.out.print("Digite um número: ");
        valores.num2 = texto.nextInt();
        System.out.print("Digite um número: ");
        valores.num3 = texto.nextInt();
        valores.imprimeIndicadores();
    }
}
