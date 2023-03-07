# Classes especiais

## Data Classes

São usadas para armazenar valores. Essas classes são fornecidas automaticamente com métodos para copiar, obter uma representação de _string_ e usar instâncias em coleções. Você pode substituir esses métodos por suas próprias implementações na declaração de classe.
~~~~ kotlin
data class User(val name: String, val id: Int) {           // 1
    override fun equals(other: Any?) =
        other is User && other.id == this.id               // 2
}
fun main() {
    val user = User("Alex", 1)
    println(user)                                          // 3

    val secondUser = User("Alex", 1)
    val thirdUser = User("Max", 2)

    println("user == secondUser: ${user == secondUser}")   // 4
    println("user == thirdUser: ${user == thirdUser}")

    // hashCode() function
    println(user.hashCode())                               // 5
    println(secondUser.hashCode())
    println(thirdUser.hashCode())

    // copy() function
    println(user.copy())                                   // 6
    println(user === user.copy())                          // 7
    println(user.copy("Max"))                              // 8
    println(user.copy(id = 3))                             // 9

    println("name = ${user.component1()}")                 // 10
    println("id = ${user.component2()}")
}
~~~~

## Enum Classes

São utilizadas ​​para modelar tipos que representam um conjunto finito de valores distintos, como direções, estados, modos e assim por diante.
~~~ kotlin
enum class State {
    IDLE, RUNNING, FINISHED                           // 1
}

fun main() {
    val state = State.RUNNING                         // 2
    val message = when (state) {                      // 3
        State.IDLE -> "It's idle"
        State.RUNNING -> "It's running"
        State.FINISHED -> "It's finished"
    }
    println(message)
}
~~~

1. Define uma classe de enumeração simples com três constantes de enumeração. O número de constantes é sempre finito e são todas distintas.

2. Acessa uma constante de enumeração por meio do nome da classe.

## Sealed Classes

`Sealed Class` (Classe selada) permite restringir o uso de herança. Depois de declarar uma classe selada, ela só pode ser subclasse de dentro do mesmo pacote em que a `sealed class` foi declarada. Não pode ser herdada fora do pacote onde a `sealed class` é declarada.

~~~ kotlin
sealed class Mammal(val name: String)                                                   // 1

class Cat(val catName: String) : Mammal(catName)                                        // 2
class Human(val humanName: String, val job: String) : Mammal(humanName)

fun greetMammal(mammal: Mammal): String {
    when (mammal) {                                                                     // 3
        is Human -> return "Hello ${mammal.name}; You're working as a ${mammal.job}"    // 4
        is Cat -> return "Hello ${mammal.name}"                                         // 5     
    }                                                                                   // 6
}

fun main() {
    println(greetMammal(Cat("Snowy")))

    /* Na função greetMammal é esperado um objeto do tipo Mammal, mas como Cat é um Mammal, a função executa sem problemas */

}
~~~

