# Conjuntos (Sets)

Conjunto é uma coleção não ordenada de itens e que não suporta dados duplicados.

- Para criar conjuntos são utilizadas as funções: `setOf()` e `mutableSetOf`

- Uma exibição somente leitura de um conjunto mutável pode ser obtida convertendo-a em `Set`.

~~~ kotlin
val openIssues: MutableSet<String> = mutableSetOf("uniqueDescr1", "uniqueDescr2", "uniqueDescr3") // 1

fun addIssue(uniqueDesc: String): Boolean {                                                       
    return openIssues.add(uniqueDesc)                                                             // 2
}

fun getStatusLog(isAdded: Boolean): String {                                                       
    return if (isAdded) "registered correctly." else "marked as duplicate and rejected."          // 3
}

fun main() {
    val aNewIssue: String = "uniqueDescr4"
    val anIssueAlreadyIn: String = "uniqueDescr2" 

    println("Issue $aNewIssue ${getStatusLog(addIssue(aNewIssue))}")                              // 4
    println("Issue $anIssueAlreadyIn ${getStatusLog(addIssue(anIssueAlreadyIn))}")                // 5 
}
~~~ 

1. Cria um `Set` com elementos fornecidos.

2. Retorna um valor booleano mostrando se o elemento foi realmente adicionado.
3. Retorna uma string, com base no parâmetro de entrada da função.

4. Imprime uma mensagem de sucesso: o novo elemento é adicionado ao arquivo `Set`.

5. Imprime uma mensagem de falha: o elemento não pode ser adicionado porque duplica um elemento existente.