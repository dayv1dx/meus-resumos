# String e fatiamento

Métodos úteis da classe _string_

- Maiúscula, minúscula e título:

~~~ py 
curso = 'pYtHon'

print(curso.upper()) # PYTHON
print(curso.lower()) # python
print(curso.tittle()) # Python
~~~ 

- Eliminando espaços em branco:

~~~ py 
curso = '      python  '

print(curso.strip()) # 'python'
print(curso.lstrip()) # 'python  '
print(curso.rstrip()) # '      python'
~~~ 

- Junções e centralização:
~~~ py 
curso = 'python'

print(curso.center(10, '-')) # --python--
print('-'.join(curso)) # p-y-t-h-o-n
~~~

- Fatiamento
~~~ py 
curso = 'python'

print(curso[0]) # p
print(curso[3]) # h
print(curso[2:5]) # thon
print(curso[0:5:2]) # pto
print(curso[::-1]) # nohtyp
~~~

- string de múltiplas linhas
~~~ py
nome = 'Dayv1dx'

mensagem = f''' Olá, meu nome é {nome},
Eu estou aprendendo Pyton.
    Essa mensagem tem diferentes recuos'''
~~~

<br>

# Interpolação de variáveis

~~~ py
nome='Dayv1dx'
idade=26
profissao='programador'
linguagem='python'

print(f'Olá, me chamo {nome}. Eu tenho {idade} anos de idade, trabalho como {profissao} e estou matriculado no curso de {linguagem}')
~~~

## Formatar strings com f-string
~~~ py
PI = 3.14159

print(f'Valor de PI: {PI:.2f}') # Valor de PI: 3.14
print(f'Valor de PI: {PI:    .2f}') # Valor de PI:     3.14
~~~