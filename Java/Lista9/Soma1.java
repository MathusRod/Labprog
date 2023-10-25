import java.util.*;
public class Soma1 {
  int a,b,soma;
    public static void main(String[] args){
      Scanner entrada = new Scanner(System.in);
      Soma1 somando = new Soma1();
      System.out.println("Digite um valor");
      somando.a = entrada.nextInt();
      System.out.println("Digite um outro valor");
      somando.b = entrada.nextInt();
      somando.soma= somando.a + somando.b;
      System.out.println("Soma: "+somando.soma);
    }
}
