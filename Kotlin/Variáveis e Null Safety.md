# Variáveis

~~~ kotlin
fun main() {

    var a: String = "initial"  // 1
    println(a)
    val b: Int = 1             // 2
    val c = 3                  // 3

}
~~~ 

1. `var` vem de "variável", ou seja, é um valor mutável.

2. `val` vem de "valor", ou seja, é um valor imutável. Uma constante.

# Null Safety

Em um esforço para livrar o mundo de `NullPointerException`, os tipos de variáveis ​​em Kotlin não permitem a atribuição de `null`. Para que uma variável possa ser nula, é necessário declará-la como anulável adicionando `?` no final de seu tipo.

~~~ kotlin
fun main() {

    var neverNull: String = "This can't be null"            // 1
    
    neverNull = null                                        // 2
    
    var nullable: String? = "You can keep a null here"      // 3
    
    nullable = null                                         // 4
    
    var inferredNonNull = "The compiler assumes non-null"   // 5
    
    inferredNonNull = null                                  // 6
    
    fun strLength(notNull: String): Int {                   // 7
        return notNull.length
    }
    
    strLength(neverNull)                                    // 8
    strLength(nullable)                                     // 9
    
}
~~~ 

## "Elvis operator"

<br>

![i](https://res.cloudinary.com/practicaldev/image/fetch/s--fUx8DazI--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://thepracticaldev.s3.amazonaws.com/i/6j3wmn15zj3vp3qyfctv.jpg)

~~~ kotlin

class Carro {
    var cor = "azul"
}

fun main(){

    var carro: Carro? = null

    // o "Elvis operator" testa se o valor é nulo, caso seja ele retorna um valor padrão
    val cor = carro?.cor ?: "cor padrão"
    println( cor )
}