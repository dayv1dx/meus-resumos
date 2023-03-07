# Funções

## Parâmetros com Valor Padrão e Argumentos Nomeados

~~~ kotlin
fun printMessage(message: String): Unit {                               // 1
    println(message)
}

// fun nomeFuncao (parametro: Tipo = "valor padrão){}
fun printMessageWithPrefix(message: String, prefix: String = "Info") {  // 2 

    println("[$prefix] $message")
}

fun sum(x: Int, y: Int): Int {                                          // 3
    return x + y
}

fun multiply(x: Int, y: Int) = x * y                                    // 4

fun main() {
    printMessage("Hello")                                               // 5                    
    printMessageWithPrefix("Hello", "Log")                              // 6
    printMessageWithPrefix("Hello")                                     // 7
    printMessageWithPrefix(prefix = "Log", message = "Hello")           // 8
    println(sum(1, 2))                                                  // 9
    println(multiply(2, 4))                                             // 10
}
~~~

1. Quando a função não tem retorno, pode-se usar a palavra `Unit`.

2. **Valor padrão:** Caso não seja passado nenhum valor para o segundo parâmetro da função `printMessageWithPrefix`, por padrão será assumido o valor "Info".

3. Uma forma de definir uma função com retorno.

4. Outra forma de definir uma função com retorno, também conhecida como _`in line function`_

8. **Parâmetros nomeados:** É possível inverter a ordem dos parâmetros definida na função, desde que isso seja feito especificando o nome dos parâmetros e seus devidos valores.

## Parâmetros "vararg"

~~~ kotlin
fun main() {

    fun printAll(vararg messages: String) {                            // 1
        for (m in messages) println(m)
    }
    printAll("Hello", "Hallo", "Salut", "Hola", "你好")                 // 2
    
    fun printAllWithPrefix(vararg messages: String, prefix: String) {  // 3
        for (m in messages) println(prefix + m)
    }
    printAllWithPrefix(
            "Hello", "Hallo", "Salut", "Hola", "你好",
            prefix = "Greeting: "                                          // 4
    )

    fun log(vararg entries: String) {
        printAll(*entries)                                             // 5
    }

}
~~~

1. Em um parâmetro `vararg` é passada uma quantidade indefinida do mesmo tipo de dado, se assemelha a um array. No função `printAll` é passado um `vararg` de Strings, ou seja, é esperado um número indefinido de Strings como parâmetro.

3. Devido a possibilidade de nomear argumentos do Kotlin, é possível utilizar o `vararg` como um parâmetro e depois adicionar outros de um tipo diferente na mesma função.

5. Em tempo de execução, um vararg é apenas um array. Para passá-lo para um parâmetro `vararg`, use o operador spread especial `*` que permite passar `*entries`(um vararg de String) em vez de `entries`(um Array<String>).