# Estruturas Condicionais 

A estrutura condicional permite o devio de fluxo de controle, quando determinadas expressões lógicas são atendidas.

- **if / else**

~~~ py
saldo = 2000.0
saque = float(input('Informe o valor do saque: '))

if saldo >= saque:
    print("Realizando saque")
else: 
    print("Saldo insuficiente")
~~~

- **elif**

~~~ py
opcao = int(input("Informe uma opção: [1] Sacar \n[2] Extrato: "))

if opcao == 1
    valor = float(input('informe a quantia para o saque: '))
elif opcao == 2
    print('exibindo o extrato...')
else:
    sys.exit('opção inválida')
~~~

- **if ternário**
~~~ py
status = "sucesso" if saldo >= saque else "falha"

print(f"{status} ao realizar saque!")
~~~
