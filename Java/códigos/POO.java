package Java.códigos;

public class POO{
    public static void main(String[] args){
        
        class Casa { // classes se iniciam com letra maiúscula

            // propriedades
            String cor;
        
            // métodos (iniciam com letra minúscula)
            void abrirPorta(){
        
                System.out.println("porta aberta!");
            }
    }

    Casa minhaCasa = new Casa(); // instanciando um objeto

// com o objeto "Casa" é possível acessar os recursos da classe
minhaCasa.abrirPorta();
minhaCasa.cor = "Cor";

class Funcionario {

    // propriedades
    String nome;
    double salario;

    // métodos - sem retorno "void"
    void recuperarSalario() {
        System.out.println ( this.salario );} // "this" é uma palavra reservada que faz referência a dados, propriedades e métodos dentro da própria classe.

    // método com retorno, no lugar do "void" escrever o tipo de retorno desejado (double, int, String)
    double recuperarSalarioBonus( double bonus ) { // "bonus" é um parâmetro do método

        this.salario = this.salario - (this.salario * 0.1);
        return this.salario + bonus;   
    }
} 

Funcionario funcionario = new Funcionario(); // instanciando
funcionario.nome = "Dayvid";
funcionario.salario = 1000;

funcionario.recuperarSalario();
double salarioRecuperado = funcionario.recuperarSalario( bonus = 150 );
System.out.println("O salário é: " + salarioRecuperado);

}