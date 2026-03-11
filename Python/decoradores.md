# Decoradores

Funções em Python são objetos de primeira classe. Isso significa que as funções podem ser passadas e usadas como argumentos de outras funções. O Python permite que as funções sejam usadas como valores de retorno.

## Inner functions
~~~ py
def mensagem(nome):
    print("executando mensagem")
    return f"Oi {nome}"


def mensagem_longa(nome):
    print("executando mensagem longa")
    return f"Olá tudo bem com você {nome}?"


def executar(funcao, nome):
    print("executando executar")
    return funcao(nome)


print(executar(mensagem, "Joao")) 
print(executar(mensagem_longa, "Joao"))

""" 
executando executar
executando mensagem
Oi João
executando executar
executando mensagem longa
Olá tudo bem com você João
"""
~~~ 

## Retornando função

~~~ py
def calculadora(operacao):
    def soma(a, b):
        return a + b

    def sub(a, b):
        return a - b

    def mul(a, b):
        return a * b

    def div(a, b):
        return a / b

    match operacao:
        case "+":
            return soma
        case "-":
            return sub
        case "*":
            return mul
        case "/":
            return div


op = calculadora("+")
print(op(2, 2))
op = calculadora("-")
print(op(2, 2))
op = calculadora("*")
print(op(2, 2))
op = calculadora("/")
print(op(2, 2))
~~~ 

## Decorador simples

~~~ py
def meu_decorador(funcao):
    def envelope():
        print("faz algo antes de executar")
        funcao()
        print("faz algo depois de executar")

    return envelope


@meu_decorador # jeito certo
def ola_mundo():
    print("Olá mundo!")


ola_mundo()


""" jeito errado
ola_mundo = meu_decorador(ola_mundo)
ola_mundo()
"""
~~~