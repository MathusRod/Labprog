import java.util.Scanner;
class Expressao{
  double a;
  double b;
  double x;
    
  void calcular() {
    x = a*a + 2*a*b + b*b;
  }
}
public class Funcao02 {
  public static void main(String[] args) {
    Scanner valor = new Scanner(System.in);
    Expressao cal = new Expressao();

    System.out.println("Digite o valor de A");
    cal.a= valor.nextDouble();
    System.out.println("Digite o valor de B");
    cal.b= valor.nextDouble();
    
    cal.calcular();
        
    System.out.println("Valor final: "+cal.x);
  }
}
