# Programação Orientada a Objetos

~~~ py
# para criar uma class basta usar a palavra 'class'
class Bicicleta:
    def __init__(self, cor, modelo, ano, valor): # construtor
        self.cor = cor # atributo
        self.modelo = modelo
        self.ano = ano
        self.valor = valor

    def buzinar(self): # método 1
        print("Plim plim...")

    def parar(self): # método 2
        print("Parando bicicleta...")
        print("Bicicleta parada!")

    def correr(self): # método 3
        print("Vrummmmm...")

    def __str__(self):
        return f"{self.__class__.__name__}: {', '.join([f'{chave}={valor}' for chave, valor in self.__dict__.items()])}"


b1 = Bicicleta("vermelha", "caloi", 2022, 600) #instanciando o objeto
b1.buzinar() # chamado os métodos
b1.correr()
b1.parar()
print(b1.cor, b1.modelo, b1.ano, b1.valor)

b2 = Bicicleta("verde", "monark", 2000, 189)
print(b2)
b2.correr()
~~~ 


## Construtores e Destrutores

O método construtor sempre é executado quando uma nova instância da classe é criada. Nesse método inicializamos o estado do nosso objeto. Para declarar o método construtor da classe, criamos um método com o nome `__init__`

~~~ py
class Cachorro
    def __inti__(self, nome, cor, acordado=True)
        self.nome = nome
        self.cor = cor
        self.acordado = acordado
~~~ 

O método destrutor sempre é executado quando uma nova instância da classe é destruída.

~~~ py
class Cachorro
    def __del__(self)
      print("Destruindo a instância")

c = Cachorro()
del c
~~~ 

## Herança

É a capacidade de uma classe filha derivar ou herdar as características e comportamentos da classe pai (base).

1. Simples

~~~ py
class A: #classe pai
    pass

class B(A): #classe filha
    pass
~~~ 

2. Múltipla

~~~ py
class A: #classe pai 1
    pass

class b: #classe pai 2
    pass

class C(A, B): #classe filha
    pass
~~~ 

## Encapsulamento 

É uma ideia de agrupar dados e os métodos que manipulam esses dados e os métodos que manipulam esses dados em uma unidade. Isso impõe restrições ao acesso direto a variáveis e métodos e pode evitar a modificação acidental de dados. Para evitar alterações acidentais, a variável de um objeto só pode ser alterada pelo método desse objeto.

~~~ py
class Conta: 
    def __init__(self, saldo=0):
        self._saldo = saldo # _var convenção para mostrar que o atributo é privado, mas não garante que ele não possa ser acessado.

    def depositar(self, valor):
        pass

    def sacar(self, valor):
        pass

~~~ 

Python não possue palavras reservadas para definir se um atributo é público ou privado, isso é feito por convenção visto que a linguagem em questão é dinamicamente tipada.

### Properties

Propriedades são valores que podem ser retornados por funções e podem ser acessados como atributos da classe.

~~~py
class Foo:
    def __init__(self, x=None):
        self._x = x

    @property # sintaxe da propriedade
    def x(self):
        return self._x or 0

    @x.setter # atribuindo valores a essa propriedade
    def x(self, value):
        self._x += value

    @x.deleter
    def x(self):
        self._x = -1


foo = Foo(10)
print(foo.x) # printando o retorno da 'função' como um atributo 
del foo.x
print(foo.x)
foo.x = 10
print(foo.x)
~~~

Outro exemplo

~~~ py 
class Pessoa:
    def __init__(self, nome, ano_nascimento):
        self.nome = nome
        self._ano_nascimento = ano_nascimento

    @property
    def idade(self): # um bom jeito de se usar uma propriedade
        _ano_atual = 2022
        return _ano_atual - self._ano_nascimento


pessoa = Pessoa("Guilherme", 1994)
print(f"Nome: {pessoa.nome} \tIdade: {pessoa.idade}")
~~~ 

### Polimorfismo

Na programação, polimorfismo significa o mesmo nome de função sendo usado para tipos diferentes. Naherança,a classe filha herda os métodos da classe pai. No entanto é possível modificar um método em uma classe filha herdada da classe pai.

~~~ py
class Passaro:
    def voar(self):
        print("Voando...")


class Pardal(Passaro):
    def voar(self):
        super().voar() # implementação padrão


class Avestruz(Passaro):
    def voar(self): # implementação personalizada
        print("Avestruz não pode voar")


def plano_voo(obj): # essa função aguarda um objeto que tenha a função 'voar'
    obj.voar()


plano_voo(Pardal()) # "Voando..."
plano_voo(Avestruz()) # "Avestruz não pode voar"
~~~ 

### Variáveis de Classe e Variáveis de instância

Todos os objetos nascem com o memso número de atributos de classe e instância. Atributos de instância são diferentes para cada objeto, já os atributos de classe são compartilhados entre os objetos.

~~~ py 
class Estudante:
    escola = "Poli" # atributo de classe

    def __init__(self, nome, matricula): # atributps de instância
        self.nome = nome
        self.matricula = matricula

    def __str__(self) -> str:
        return f"{self.nome} - {self.matricula} - {self.escola}"


def mostrar_valores(*objs):
    for obj in objs:
        print(obj)


aluno_1 = Estudante("Guilherme", 1)
aluno_2 = Estudante("Giovanna", 2)
mostrar_valores(aluno_1, aluno_2)

Estudante.escola = "Python"
aluno_3 = Estudante("Chappie", 3)
mostrar_valores(aluno_1, aluno_2, aluno_3)
~~~
