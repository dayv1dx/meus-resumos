# Estruturas de repetição

- **for**
~~~ py 
texto = input('Informe um texto:')
VOGAIS = 'AEIOU'
for letra in texto:
    if letra.upper() in VOGAIS:
        print(letra, end="")
~~~

- **função _range_**

~~~ py 

# range(stop) -> range object
# range(start, stop, step) -> range object

list(range(4)) # [0, 1, 2, 3]
~~~

Utilizando _range_ e _for_ 
~~~ py
for n in range(0,11):
    print(numero, end=" ") # 0 1 2 3 4 5 6 7 8 9 10


# tabuada do 5
for n in range(0,51,5):
    print(numero, end=" ") # 0 5 10 15 20 25 30 35 40 45 50
~~~


- **while**
~~~ py
opcao = -1

while opcao != 0:
    opca0 = int(input("[1] Sacar \n[2] Extrato \n[0] Sair \n: "))

    if opcao == 1
        print('Sacando...')
    elif opcao == 2
        print("Exibindo o extrato")
~~~



