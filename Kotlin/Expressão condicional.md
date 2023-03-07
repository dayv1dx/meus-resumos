# Expressão condicional

O `if` pode ser usado como uma expressão:

~~~ kotlin
fun main() {

    fun max(a: Int, b: Int) = if (a > b) a else b         // 1


    fun maxOld(a: Int, b: Int) : Int { // 2
        if (a > b){
            return a
        } else {
            return b 
        }
    }
    println(max(99, -42))
    println(maxOld(99, -42))
}
~~~

1. Primeiro jeito de se escrever uma expressão condicional de forma mais compacta.

2. Jeito tradicional de se escrever, inclusive em outras linguagens de programação.