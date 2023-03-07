# Funções de escopo

- _let_

A função da biblioteca padrão Kotlin _`let`_ pode ser usada para escopo e verificações nulas. Quando chamado em um objeto, _`let`_ executa o bloco de código fornecido e retorna o resultado de sua última expressão. O objeto é acessível dentro do bloco pela referência _`it`_(por padrão) ou um nome personalizado.

~~~ kotlin
fun customPrint(s: String) {
    print(s.uppercase())
}

fun main() {

    val empty = "test".let {               // 1
        customPrint(it)                    // 2
        it.isEmpty()                       // 3
    }
    println(" is empty: $empty")


    fun printNonNull(str: String?) {
        println("Printing \"$str\":")

        str?.let {                         // 4
            print("\t")
            customPrint(it)
            println()
        }
    }
    
    fun printIfBothNonNull(strOne: String?, strTwo: String?) {
        strOne?.let { firstString ->       // 5 
            strTwo?.let { secondString ->
                customPrint("$firstString : $secondString")
                println()
            }
        }
    }
    
    printNonNull(null)
    printNonNull("my string") 
    printIfBothNonNull("First","Second") 

}
~~~ 

- _run_

Basicamente, faz o mesmo do _`let`_ : executa um bloco de código e retorna seu resultado. A diferença é que o _`run`_ do objeto é acessado por `this`. Isso é útil quando você deseja chamar os métodos do objeto em vez de passá-los como um argumento.

~~~ kotlin
fun main() {

    fun getNullableLength(ns: String?) {
        println("for \"$ns\":")
        ns?.run {                                                  // 1
            println("\tis empty? " + isEmpty())                    // 2
            println("\tlength = $length")                           
            length                                                 // 3
        }
    }
    getNullableLength(null)
    getNullableLength("")
    getNullableLength("some string with Kotlin")

}
~~~ 

- _with_

É uma função sem extensão que pode acessar membros de seu argumento de forma concisa: você pode omitir o nome da instância ao se referir a seus membros.
~~~ kotlin
class Configuration(var host: String, var port: Int) 

fun main() {
    val configuration = Configuration(host = "127.0.0.1", port = 9000) 


    with(configuration) {
        println("$host:$port")
    }

    // instead of:
    println("${configuration.host}:${configuration.port}")    

}
~~~

- _apply_

É utilizada para atribuir valores e inicializar objetos.
~~~ kotlin

data class Person(var name: String, var age: Int, var about: String) {
    constructor() : this("", 0, "")                         // 1
}
​
fun main() {
​
    val jake = Person()                                     
    val stringDescription = jake.apply {                    // 2
        name = "Jake"                                       // 3
        age = 30
        about = "Android developer"
    }.toString()                                            // 4
​
    println(stringDescription)
}
~~~

1. Foi criada uma sobrecarga de construtor para quando o construtor vazio for chamada, ele inicializar com esses valores.

2. Atribuindo valores ao objeto `jake`

- _also_

_`also`_ funciona como _`apply`_: executa um determinado bloco e retorna o objeto chamado. Dentro do bloco, o objeto é referenciado por `it`, então é mais fácil passá-lo como argumento. Essa função é útil para incorporar ações adicionais, como fazer cadeias de chamadas de métodos.

~~~ kotlin
data class Person(var name: String, var age: Int, var about: String) {
             constructor() : this("", 0, "")
}
         
fun writeCreationLog(p: Person) {
    println("A new person ${p.name} was created.")              
}
         
fun main() {

    val jake = Person("Jake", 30, "Android developer")   // 1
        .also {                                          // 2 
            writeCreationLog(it)                         // 3
    }

}
~~~ 