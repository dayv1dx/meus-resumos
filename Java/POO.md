# O que é Programação Orientada a Objetos?

**Programação orientada** a objetos (**POO**, ou **OOP** segundo as suas siglas em inglês) é um paradigma de programação baseado no conceito de "objetos", que podem conter dados na forma de campos, também conhecidos como atributos, e códigos, na forma de procedimentos, também conhecidos como métodos.

`PlantaArquitetonica.java`
~~~ java
class PlantaArquitetonica { // classes se iniciam com letra maiúscula

    // propriedades
    String cor;

    // métodos (iniciam com letra minúscula)
    void abrirPorta(){

        System.out.println("porta aberta!");
    }
}
~~~

`MainActivity.java`

~~~ java 
Casa minhaCasa = new Casa() // instanciando um objeto

// com o objeto "Casa" é possível acessar os recursos da classe
minhaCasa.abrirPorta();
minhaCasa.cor = "Cor";
~~~

# Métodos

`Funcionario.java`
~~~ java 
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
~~~

`MainActivity.java`

~~~ java 
Funcionario funcionario = new Funcionario(); // instanciando
funcionario.nome = "Dayvid";
funcionario.salario = "1000"

funcionario.recuperarSalario();
double salarioRecuperado = funcionario.recuperarSalario( bonus:150 );
System.out.println("O salário é: " + salarioRecuperado);
~~~

# Herança

Utilizar herança na programação faz com que o código tenha menos linhas e que os sistemas fiquem mais organizados, pois é muitos comum que alguns objetos possuam as mesmas propriedades e para evitar escrever essas propriedades várias vezes, cria-se uma classe "pai", onde as outras classes "filhas" herdam tais características.

~~~ java 

class Animal {

    int tamanho;
    String cor;
    double peso;

    // Getter e Setter, servem para recuperar e configurar o valor de uma propriedade, respectivamente. A vantagem de usar esses métodos é: poder fazer algumas validações antes das alterações.

    void setCor ( String cor){
        this.cor = "cor";
    }

    String getCor(){
        return this.cor;
    }


    void dormir(){
        System.out.println("dormindo zzz")
    }

    void correr(){
        System.ou.println("correndo como um animal")
    }
}

class Cao extends Animal { 
// "extends" aplica a relação de herança entre a classe Pai e classe Filha. 
// Com isso é possível acessar as propriedades e os métodos herdados.

Cao cao = new Cao();
cao.dormir();

cao.setCor("Azul"); // set
System.out.println( cao.getCor() ); // get

// a classe filha pode, ainda, ter seus próprios métodos.
void latir(){
    System.out.println("au au au au");}
}

class Passaro extends Animal {
    void correr(){ // sobrescrevendo um método da classe pai
        System.out.println("voando")
    }
}
~~~

# Modificadores de acesso

Os modificadores permitem você controlar a visibilidade de propriedades e métodos para pessoas que utilizem sua classe. Sendo eles:

1. **_public_** : todas as classes terão acesso aos métodos e atributos.

2. **_private_** : os métodos e atributos só podem ser acessados dentro da classe.

3. **_protected_** : podem ser acessados desde que estejam no mesmo pacote e/ou subclasses.

4. **_default_** : caso não tenha sido definido nenhum modificador, é permitido o acesso dentro do pacote.

`MainActivity.java`
~~~ java

Conta conta = new Conta();
conta.depositar( valorDeposito: 100);
conta.sacar(valorSacar: 50);

System.out.println(conta.saldo);

~~~

`Conta.java`
~~~ java
public class Conta {

private int numeroConta;
private double saldo = 100;

public double recuperarSaldo(){
    return this.saldo;
}

public void depositar( double valorDepositado){
    this.saldo = this.saldo + valorDepositado;
}

public void sacar( double valorSaque){
    this.saldo = this.saldo - valorSaque;
}

}

~~~