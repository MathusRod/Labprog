import java.util.Scanner;

class Somatorio{
  int a,b,c,soma;

  void somador(){
    soma = a+b;
    soma+=c;
    System.out.println("Soma: "+soma);
  }
}

public class Soma3 {
    public static void main(String[] args){
      Scanner variavel = new Scanner(System.in);
      Somatorio somando = new Somatorio();
      System.out.println("Digite um valor");
      somando.a = variavel.nextInt();
      System.out.println("Digite um outro valor");
      somando.b = variavel.nextInt();
      System.out.println("Digite mais um valor");
      somando.c = variavel.nextInt();
      somando.somador();
    }
}