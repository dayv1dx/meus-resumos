# Pair e Triple

`Pair` representa um par de valores e `Triple` um trio de valores

~~~ kotlin
fun main() {

    //val localizacao = Pair(10, 20)
    val localizacao = 10 to 20 // sintaxe mais enxuta

    println(localizacao.first)
    println(localizacao.second)
    
    val triple = Triple(10, 20, "exemplo")
    
    println(triple.first)
    println(triple.second)
    println(triple.third)
}
~~~ 