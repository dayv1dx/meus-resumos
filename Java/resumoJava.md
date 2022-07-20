# Linguagem Java

## Variáveis

~~~ java
String nome = "Dayvid";

int numero = 25; // variaveis com letras minusculas
int ALTURA = 185; // constantes com letras maiusculas 
 
byte minhaVariavelByte = 10; // números no range de -128 até 127

short minhaVariavelShort = 3500; // números no range de -32768 até 32767

int minhaVariavelInt = 380000; // números no range de -2147483648 até 2147483647

long minhaVariavelLong = 10000000L; // números muito grandes, tem que colocar o "L" no final

float saldo = 2.3456f; // números decimais com precisao de 7 casas, tem que colocar o "f" no final

double e = 2,718798482; // números decimais com precisao de 15 casas

boolean minhaVariavelBoolean = true; // valores booleanos - true/false
~~~

## Operadores aritiméticos

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

if else

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

switch

~~~~ java
 /* switch (valor){
    case valorTestado;
        caso valor testado;
        break;
} */
int nota = 8
switch ( nota ){
    case 10: 
    case 9:    
    System.out.println("ótimo!");
    break;

    case 8: 
    System.out.println("bom!");
    break;

    case 7: 
    System.out.println("regular!");
    break;

    default: 
    System.out.println("ruim"); // a situação "padrão" é usada sem o break
}
~~~~

## Array

 Uma estrutura de dados que armazena uma coleção de elementos (como se fosse uma lista) de tal forma que cada um dos elementos pode ser identificado por, pelo menos, um índice ou uma chave.

~~~~ java
String [] nomeArray = {"jose", "dayvid", "cunha"}; // usar colchetes [] para definir, chaves {} para agrupar e separar por vírgula
    System.out.println( nomeArray [1]); // os itens do array são acessados por indices {0,1,2}

int [] numerosPrimos = {2,3,5,7,11}; // array de números
    System.out.println( numerosPrimos.length ); // exibe o tamanho do array
~~~~

## Loops

while, do while e for

~~~~ java
/* while (condicao) {
    executa enquanto a condição é verdadeira
    }
*/
int numero = 0;

while ( numero < 5){
    System.out.println ("executou " + numero);
    numero = numero++; // maneira mais simples de incrementar um número
}

do { // ação a ser executado antes do while

} while ( condicao ); // primeiro executa e depois testa a condição

for ( int n = 1; n <5; n++){ // a vantagem é colocar a variável de controle dentro da estrutura
    System.out.println (n);}
