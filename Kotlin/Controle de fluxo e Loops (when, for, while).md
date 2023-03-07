# When

Em vez da declaração amplamente usada `switch`, o Kotlin fornece a `when` construção mais flexível e clara. Pode ser usado como uma declaração ou como uma expressão.

## When Statement

Utilizando o `when` como declaração:
~~~ kotlin
fun main() {
    cases("Hello")
    cases(1)
    cases(0L)
    cases(MyClass())
    cases("hello")
}

fun cases(obj: Any) {                                
    when (obj) {                                     // 1   
        1 -> println("One")                          // 2
        "Hello" -> println("Greeting")               // 3
        is Long -> println("Long")                   // 4
        !is String -> println("Not a string")        // 5
        else -> println("Unknown")                   // 6
    }   
}

class MyClass
~~~ 

## When Expression

Utilizando o `when` como expressão:
~~~ kotlin
fun main() {
    println(whenAssign("Hello"))
    println(whenAssign(3.4))
    println(whenAssign(1))
    println(whenAssign(MyClass()))
}

fun whenAssign(obj: Any): Any {
    val result = when (obj) {                   // 1
        1 -> "one"                              // 2
        "Hello" -> 1                            // 3
        is Long -> false                        // 4
        else -> 42                              // 5
    }
    return result
}

class MyClass
~~~ 

# Loops

Kotlin suporta todos os loops comumente usados: `for`, `while`, `do-while`.

## for
~~~ kotlin
val cakes = listOf("cenoura", "queijo", "chocolate")

for (cake in cakes) {                               // 1
    println("Yummy, it's a $cake cake!")
}
~~~

1. Percorre cada item da lista

## while e do-while

~~~ kotlin
fun eatACake() = println("Eat a Cake")
fun bakeACake() = println("Bake a Cake")

fun main(args: Array<String>) {
    var cakesEaten = 0
    var cakesBaked = 0
    
    while (cakesEaten < 5) {                    // 1
        eatACake()
        cakesEaten ++
    }
    
    do {                                        // 2
        bakeACake()
        cakesBaked++
    } while (cakesBaked < cakesEaten)

}
~~~

1. Executa o bloco enquanto a condição for verdadeira
2. Executa primeiro o bloco e depois verifica a condição

## Iterators

Em Kotlin é possível definir iteradores personalizados em classes, implementando o operador `iterator` nelas.

~~~ kotlin
class Animal(val name: String)

class Zoo(val animals: List<Animal>) {

    operator fun iterator(): Iterator<Animal> {             // 1
        return animals.iterator()                           // 2
    }
}

fun main() {
    
    val animals = listOf(Animal("Cavalo"), Animal("Boi"))
    val zoo = Zoo(animals)

    for (animal in zoo) {                                   // 3
        println("Watch out, it's a ${animal.name}")
    }

}
~~~ 
1. Define um iterador em uma classe. Deve ser nomeado `iterator` e ter o `operator` modificador.

2. Retorna o iterador que atende aos seguintes requisitos de método:
    - next():Animal
    - hasNext():Boolean
    
3. Percorre os animais do zoológico com o iterador definido pelo usuário.
O iterador pode ser declarado no tipo ou como uma função de extensão.