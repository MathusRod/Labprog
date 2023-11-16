package Telas01;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Calc {

    private JFrame frame;
    private JTextField num1;
    private JTextField num2;
    private JLabel resultadoLabel;

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    Calc window = new Calc();
                    window.frame.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    public Calc() {
        initialize();
    }

    private void initialize() {
        frame = new JFrame();
        frame.setBounds(100, 100, 500, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setLayout(null);

        JLabel lblNewLabel = new JLabel("Valor 1");
        lblNewLabel.setBounds(45, 62, 46, 14);
        frame.getContentPane().add(lblNewLabel);

        JLabel lblNewLabel_1 = new JLabel("Valor 2 (%)");
        lblNewLabel_1.setBounds(45, 90, 86, 14);
        frame.getContentPane().add(lblNewLabel_1);

        num1 = new JTextField();
        num1.setBounds(124, 59, 86, 20);
        frame.getContentPane().add(num1);
        num1.setColumns(10);

        num2 = new JTextField();
        num2.setBounds(124, 87, 86, 20);
        frame.getContentPane().add(num2);
        num2.setColumns(10);

        resultadoLabel = new JLabel("Resultado:");
        resultadoLabel.setBounds(45, 118, 200, 20);
        frame.getContentPane().add(resultadoLabel);

        JButton btnNewButton = new JButton("Somar");
        btnNewButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                calcularESomar();
            }
        });
        btnNewButton.setBounds(50, 160, 100, 33);
        frame.getContentPane().add(btnNewButton);
        
        JButton btnNewButton_1 = new JButton("Diminuir");
        btnNewButton_1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                calcularEDiminuir();
            }
        });
        btnNewButton_1.setBounds(150, 160, 100, 33);
        frame.getContentPane().add(btnNewButton_1);
        
        JButton btnNewButton_2 = new JButton("Multiplicar");
        btnNewButton_2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                calcularEMultiplicar();
            }
        });
        btnNewButton_2.setBounds(250, 160, 100, 33);
        frame.getContentPane().add(btnNewButton_2);
        
        JButton btnNewButton_3 = new JButton("Dividir");
        btnNewButton_3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                calcularEDividir();
            }
        });
        btnNewButton_3.setBounds(350, 160, 100, 33);
        frame.getContentPane().add(btnNewButton_3);
        
        JButton btnNewButton_4 = new JButton("Porcentagem");
        btnNewButton_4.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                calcularPorcentagem();
            }
        });
        btnNewButton_4.setBounds(150, 193, 200, 33);
        frame.getContentPane().add(btnNewButton_4);
    }

    private void calcularESomar() {
        try {
            double valor1 = Double.parseDouble(num1.getText().replace(",", "."));
            double valor2 = Double.parseDouble(num2.getText().replace(",", "."));
            double resultado = valor1 + valor2;

            // Formatando o resultado para o formato decimal brasileiro
            DecimalFormat formatoBrasileiro = new DecimalFormat("#,##0.00");
            String resultadoFormatado = formatoBrasileiro.format(resultado);

            resultadoLabel.setText("Resultado: " + resultadoFormatado);
        } catch (NumberFormatException ex) {
            resultadoLabel.setText("Por favor, insira números válidos.");
        }
    }
    private void calcularEDiminuir() {
        try {
            double valor1 = Double.parseDouble(num1.getText().replace(",", "."));
            double valor2 = Double.parseDouble(num2.getText().replace(",", "."));
            double resultado = valor1 - valor2;

            // Formatando o resultado para o formato decimal brasileiro
            DecimalFormat formatoBrasileiro = new DecimalFormat("#,##0.00");
            String resultadoFormatado = formatoBrasileiro.format(resultado);

            resultadoLabel.setText("Resultado: " + resultadoFormatado);
        } catch (NumberFormatException ex) {
            resultadoLabel.setText("Por favor, insira números válidos.");
        }
    }
    private void calcularEMultiplicar() {
        try {
            double valor1 = Double.parseDouble(num1.getText().replace(",", "."));
            double valor2 = Double.parseDouble(num2.getText().replace(",", "."));
            double resultado = valor1 * valor2;

            // Formatando o resultado para o formato decimal brasileiro
            DecimalFormat formatoBrasileiro = new DecimalFormat("#,##0.00");
            String resultadoFormatado = formatoBrasileiro.format(resultado);

            resultadoLabel.setText("Resultado: " + resultadoFormatado);
        } catch (NumberFormatException ex) {
            resultadoLabel.setText("Por favor, insira números válidos.");
        }
    }
    private void calcularEDividir() {
        try {
            double valor1 = Double.parseDouble(num1.getText().replace(",", "."));
            double valor2 = Double.parseDouble(num2.getText().replace(",", "."));
            double resultado = valor1 / valor2;

            // Formatando o resultado para o formato decimal brasileiro
            DecimalFormat formatoBrasileiro = new DecimalFormat("#,##0.00");
            String resultadoFormatado = formatoBrasileiro.format(resultado);

            resultadoLabel.setText("Resultado: " + resultadoFormatado);
        } catch (NumberFormatException ex) {
            resultadoLabel.setText("Por favor, insira números válidos.");
        }
    }
    private void calcularPorcentagem() {
        try {
            double valor1 = Double.parseDouble(num1.getText().replace(",", "."));
            double valor2 = Double.parseDouble(num2.getText().replace(",", "."));
            double valorPercent = valor1 * valor2/100;
            double resultado = valorPercent;

            // Formatando o resultado para o formato decimal brasileiro
            DecimalFormat formatoBrasileiro = new DecimalFormat("#,##0.00");
            String resultadoFormatado = formatoBrasileiro.format(resultado);

            resultadoLabel.setText("Resultado: " + resultadoFormatado);
        } catch (NumberFormatException ex) {
            resultadoLabel.setText("Por favor, insira números válidos.");
        }
    }
}
