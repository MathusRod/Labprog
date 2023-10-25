import java.util.Scanner;

class Somatorio{
  int a,b,soma;
  void somador(){
    soma = a+b;
    System.out.println("Soma: "+soma);
  }
}

public class Soma2 {
    public static void main(String[] args){
      Scanner entrada = new Scanner(System.in);
      Somatorio somando = new Somatorio();
      System.out.println("Digite um valor");
      somando.a = entrada.nextInt();
      System.out.println("Digite um outro valor");
      somando.b = entrada.nextInt();
      somando.somador();
    }
}
