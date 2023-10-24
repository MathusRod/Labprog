//• Crie a classe chamada Indicadores e um método chamado ImprimirIndicadores para guardar 3 valores inteiros que imprima na tela:

//• Em seguida crie uma classe chamada ExecutarValores: ela deve instanciar a classe Indicadores para um atributo chamado indicador1 nele você deve colocar os três valores, e use o método imprimirIndicadores do método Indicadores para imprimir os 3 indicadores na tela.

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
