# Exceções

~~~ kotlin

fun main(){
    val a = 10
    val b = 0

    try { // tenta executar esse bloco
        val divisao = a/b
    } catch (e: Throwable){ // se a primeira execução não der certo, esse bloco é executado
        println(e.message)
    } finally { // é executado independente se deu erro ou não
        println("finally executado")
    }
}
~~~ 

## _`Try`_ é uma expressão

~~~ kotlin

fun main(){
    val a = 10
    val b = 0
     
    val divisao = try { a/b } catch (e: ArithmeticException){ 0 }
    println( divisao )
}
~~~ 

## Checked exceptions

O Kotlin não tem esse tipo de exceção, diferente do Java.

[A Guide to @Throws in Kotlin](https://www.baeldung.com/kotlin/throws-annotation)

~~~ kotlin
// exemplo de exceções customizadas e idiomáticas

class IllegalVoterException(message: String) : Throwable(message)

@Throws(IllegalVoterException::class)
fun vote(name: String, age: Int){
    if (age < 16){
        throw IllegalVoterException("$name não pode votar!")
    }
    println("Voto de $name realizado com sucesso")
}

fun main(){
    try {
        vote("Dayv1dx", 25)
        vote("Theo", 3)
    }
}