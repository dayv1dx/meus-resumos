# **Conjuntos**

Um _set_ é uma coleção que não possui objetos repetidos, usamos _sets_ para representar conjuntos matemáticos ou eliminar itens duplicados de um iterável.

~~~ py 
numeros = set([1, 2, 3, 1, 3, 4])
print(numeros)  # {1, 2, 3, 4}

letras = set("abacaxi")
print(letras)  # {"b", "a", "c", "x", "i"}

carros = set(("palio", "gol", "celta", "palio"))
print(carros)  # {"gol", "celta", "palio"}
~~~

## Acessando os dados

Conjuntos em Python não suportam indexação e nem fatiamento, caso queira acessar os seuss valores é necessário converter o conjunto para lista.

~~~ py
numeros = {1, 2, 3, 2}

numeros = list(numeros)

print(numeros[0])
~~~

## Iterar conjuntos

A forma mais comum de percorrer dados de um conjunto é utilizando o comando _for_

~~~ py
carros = {"gol", "celta", "palio"}

for carro in carros:
    print(carro)

for indice, carro in enumerate(carros):
    print(f"{indice}: {carro}")
~~~

## Métodos da classe _set_

- _union_

~~~ py
conjunto_a = {1, 2}
conjunto_b = {3, 4}

resultado = conjunto_a.union(conjunto_b)
print(resultado) # {1,2,3,4}
~~~

- _intersection_

~~~ py
conjunto_a = {1, 2, 3}
conjunto_b = {2, 3, 4}

resultado = conjunto_a.intersection(conjunto_b)
print(resultado) # {2,3}
~~~

- _diference_

~~~ py
conjunto_a = {1, 2, 3}
conjunto_b = {2, 3, 4}

resultado = conjunto_a.difference(conjunto_b)
print(resultado) # {1}

resultado = conjunto_b.difference(conjunto_a)
print(resultado) # {4}
~~~

- _symmetric difference_

~~~ py
conjunto_a = {1, 2, 3}
conjunto_b = {2, 3, 4}

resultado = conjunto_a.symmetric_difference(conjunto_b)
print(resultado) # {1,4}
~~~

- _issubset_

~~~ py
conjunto_a = {1, 2, 3}
conjunto_b = {4, 1, 2, 5, 6, 3}

resultado = conjunto_a.issubset(conjunto_b)  # True
print(resultado)

resultado = conjunto_b.issubset(conjunto_a)  # False
print(resultado)
~~~

- _issuperset_

~~~ py
conjunto_a = {1, 2, 3}
conjunto_b = {4, 1, 2, 5, 6, 3}

resultado = conjunto_a.issuperset(conjunto_b)  # False
print(resultado)

resultado = conjunto_b.issuperset(conjunto_a)  # True
print(resultado)
~~~

- _isdisjoint_

~~~ py
conjunto_a = {1, 2, 3, 4, 5}
conjunto_b = {6, 7, 8, 9}
conjunto_c = {1, 0}

resultado = conjunto_a.isdisjoint(conjunto_b)  # True
print(resultado)

resultado = conjunto_a.isdisjoint(conjunto_c)  # False
print(resultado)
~~~

- _isdisjoint_

~~~ py
conjunto_a = {1, 2, 3, 4, 5}
conjunto_b = {6, 7, 8, 9}
conjunto_c = {1, 0}

resultado = conjunto_a.isdisjoint(conjunto_b)  # True
print(resultado)

resultado = conjunto_a.isdisjoint(conjunto_c)  # False
print(resultado)
~~~

