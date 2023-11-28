# Tuplas 

Tuplas são estruturas de dados muito parecidas com as listas a principal diferença é que tuplas são imutáveis enquanto listas são mutáveis. Podemos criar tuplas através da classe _tuple_, ou colocando valores separados por vírgula dentro de parenteses.

~~~ py 
frutas = ("laranja", "pera","uva",) # 1
print(frutas)

letras = tuple("python")
print(letras)

numeros = tuple([1, 2, 3, 4])
print(numeros)

pais = ("Brasil",) # 2
print(pais)
~~~

É uma boa prática colocar uma vírgula depois do último elemento desta (#1) para evitar erros no interpretador, principalmente quando for uma tupla de um único elemento (#2).

Os métodos das tuplas são bem parecidos com os das listas, com exceção daqueles que alteram os elementos de uma estrutura de dados.