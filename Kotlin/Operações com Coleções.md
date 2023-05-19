# Operações com Coleções

- `map`

É utilizado para fazer algumas transformações sem a necessidade de uma estrutura de repetição.

~~~ kotlin
fun main() {

    val lista = listOf("Rhuan", "Rayssa", "Dayv1dx", "Mirellão")

    /*val novaLista = mutableListOf<String>()
    lista.forEach { nome ->
        novaLista.add( nome.uppercase())
    }*/

    val novaLista = lista.map { nome -> // o método faz todo o passo a passo das linhas 12 a 14
            nome.uppercase()
    }
}
~~~

- `filter`

Cria uma lista com o mesmo número de itens ou menos dos mesmos itens iniciais da lista, utilizando um filtro.

~~~ kotlin
fun main() {

    val listaFrutas = listOf("laranja", "maça", "abacaxi", "banana")
    val novaLista = listaFrutas.filter { fruta ->
        fruta == "laranja" // condição necessária para aplicar o filtro
    }
    println( novaLista )
}
~~~

- `union`

Faz a junção de itens de duas listas

~~~ kotlin
fun main() {

    val listaLanches = listOf("hotdog", "batata frita", "pizza")
    val listaBebidas = listOf("h2o", "suco", "refri")

    val novaLista = listaBebidas.union(listaLanches)
    println(novaLista)
}
~~~

- `sorted`

Ordena itens em uma lista, podendo ser ordenação ascedente ou descendente.

~~~ kotlin
fun main() {

    val listaLanches = listOf("hotdog", "batata frita", "pizza")
    val listaBebidas = listOf(1,2,3)

    val listaAsc = listaLanches.sorted()
    val listaDesc = listaBebidas.sortedDescending()

    println( listaAsc )
    println( listaDesc )

}