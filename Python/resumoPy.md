# Linguagem Python

## Variáveis


## Operadores aritiméticos

- soma (+)
- subtração (-)
- divisão (/)
- divisão inteira (//)
- multiplicar (*)
- resto da divisão (%)
- exponenciação (**)

## Operadores relacionais e lógicos

~~~~ python 
- == (igual a) 
- != (diferente)
- > (maior que)
- < (menor que)
- >= (maior ou igual)
- <= (menor ou igual)
- and (e)
- or (ou)
- not (negação)
- in (associação, está dentro de uma lista)
~~~~

## Operadores de atribuição

É uma forma reduzida de atribuir valores a uma variável, atualizando seu valor já existente funciona com qualquer operção matemática.

~~~ py
saldo = 500
saldo += 200  # saldo = saldo + 200
print(saldo) # 700
~~~

## Operadores de identidade

São operadores utilizados para comparar se os dois objetos testados ocupam a mesma posição na memória.
~~~ py
curso = "Curso de Python"
nome_curso = curso
saldo, limite = 200, 200

curso is nome_curso # false
curso is limite # true
~~~

