# Operações com Arrays

Arrays são coleções de elementos ordenados, mutável e com a quantidade de itens fixa.

~~~ kotlin
fun main() {

    val lista = arrayOf("x", "y", 1, 5.7, true)
    lista.forEach {it -> // método utilizado para percorrer um array
        println(it)

        println(lista[2]) // get
        println(lista.size) // retorna o tamanho do array
        println(lista.indexOf("y")) // retorna o índice do item no array
        lista.shuffle() // embaralha a ordem dos itens
    }

}
~~~