# POO

## **Abstração**

Nesse contexto, classes e objetos são abstrações de entidades existentes no domínio/problema em questão.

## **Encapsulamento**

Encapsular significa esconder a implementação dos objetos, criando interfaces de uso mais concisas e fáceis de usar/entender. Isso favorece principalmente dois aspectos de um sistema: manutenção e evolução.

## **Herança**

Permite que as classes compartilhem suas características (propriedades) e comportamentos (funções) entre si. A herança é usada na intenção de promover o reuso de código através de estruturas mais genéricas e flexíveis.

~~~ kotlin
open class Dog {                // 1
    open fun sayHello() {       // 2
        println("wow wow!")
    }
}

class Yorkshire : Dog() {       // 3
    override fun sayHello() {   // 4
        println("wif wif!")
    }
}

fun main() {
    val dog: Dog = Yorkshire()
    dog.sayHello()
}
~~~

1. Em Kotlin as classes são _final_ por padrão. Para permitir a herança de classe, deve-se usar a palavra reservada `open`

2. Os métodos em Kotlin também são _final_ por padrão. Assim como as classes, a palavra `open` permite a herança

3. Para implementar a herança é necessário especificar da seguinte forma:
 ~~~ kotlin
class Cachorro : Animal(){} // class Filha : Pai()
~~~

4. Também é possível reescrever os métodos, basta utilizar a palavra reservada `override`

## Herança passando Argumentos do Construtor para a Superclasse
~~~ kotlin
open class Lion(val name: String, val origin: String) {
    fun sayHello() {
        println("$name, the lion from $origin says: graoh!")
    }
}

class Asiatic(name: String) : Lion(name = name, origin = "India") // 1

fun main() {
    val lion: Lion = Asiatic("Rufo")                              // 2
    lion.sayHello()
}
~~~


## **Polimorfismo**

Capacidade de um objeto poder ser referenciado de várias formas, ou seja, é possível tratar objetos criados a partir das classes específicas como objetos de uma classe genérica. Esse conceito oferece possibilidades incríveis para criação de soluções mais genéricas.

