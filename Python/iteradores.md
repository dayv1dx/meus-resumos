# Iteradores

Quando existem objetos que é uma sequência de valor, esse objeto pode ter um tamanho grande demais e isso pode causar alguns problemas como demora de execução ou então uso intensivo de memória, por exemplo.

O protocolo do iterador é uma maneira do Python fazer a iteração de uma objeto, que consiste em dois métodos especiais:

- `__iter__()`
- `__next__()`

~~~ py
class MeuIterador:
    def __init__(self, numeros: list[int]):
        self.numeros = numeros
        self.contador = 0

    def __iter__(self):
        return self

    def __next__(self):
        try:
            numero = self.numeros[self.contador]
            self.contador += 1
            return numero * 2
        except IndexError: # condição de parada
            raise StopIteration 


for i in MeuIterador(numeros=[38, 13, 11]):
    print(i)
~~~