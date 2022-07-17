# Linguagem Java

## Variáveis

~~~ java
String nome = "Dayvid";
int numero = 10; // variaveis com letras minusculas
int ALTURA = 185; // constantes com letras maiusculas 
 
byte minhaVariavelByte = 10; // números no range de -128 até 127
short minhaVariavelShort = 3500; // números no range de -32768 até 32767
int minhaVariavelInt = 380000; // números no range de -2147483648 até 2147483647
long minhaVariavelLong = 10000000L; // números muito grandes, tem que colocar o "L" no final
float saldo = 2.3456f // números decimais com precisao de 7 casas, tem que colocar o "f" no final
double e = 2,718798482 // números decimais com precisao de 15 casas, tem que colocar o "f" no final
boolean minhaVariavelBoolean = true; // valores booleanos - true/false
~~~

## Operados aritiméticos 

- somar (+)
- subtrair (-)
- dividir (/)
- multiplicar (*)
- resto da divisão (%)

## Operadores relacionais e lógicos
~~~~ java 
- == (igual a) 
- != (diferente)
- > (maior que)
- < (menor que)
- >= (maior ou igual)
- < (menor ou igual)
- && (e)
- || (ou)
~~~~
## Estruturas condicionais
~~~~ java
/* if (condicao){
    executa caso a condicao seja verdadeira;
} 
else {
    executa caso a condicao seja falsa;
    } */
 
int idade = 18;

if (idade >= 18 && idade <=60){
    System.out.println("adulto");

} else if (idade > 60){
    System.out.println("idoso");

} else if (idade > 12 && idade < 18){
    System.out.println("adolescente");

} else {
    System.out.println("crianca");
}

~~~~
