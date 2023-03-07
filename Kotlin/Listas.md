# Listas

Lista é uma coleção ordenada de itens. Em Kotlin, as listas podem ser **mutáveis** e **imutáveis**.

- Para a criação de listas mutáveis é utilizada a biblioteca padrão `mutablelistOf`

- Para a criação de listas imutáveis (*ready-only*) é utilizada a biblioteca padrão `listOf`

~~~ kotlin
val systemUsers: MutableList<Int> = mutableListOf(1, 2, 3)        // 1
val sudoers: List<Int> = systemUsers                              // 2

fun addSystemUser(newUser: Int) {                                 // 3
    systemUsers.add(newUser)                      
}

fun getSysSudoers(): List<Int> {                                  // 4
    return sudoers
}

fun main() {
    addSystemUser(4)                                              // 5 
    println("Tot sudoers: ${getSysSudoers().size}")               // 6
    getSysSudoers().forEach {                                     // 7
        i -> println("Some useful info on user $i")
    }
    // getSysSudoers().add(5) <- Error!                           // 8
}
~~~ 

1. Cria um arquivo MutableList.

2. Cria uma exibição somente leitura da lista.

3. Adiciona um novo item ao arquivo MutableList.

4. Uma função que retorna um imutável List.

5. Atualiza o MutableList. Todas as exibições somente leitura relacionadas também são atualizadas, pois apontam para o mesmo objeto.

6. Recupera o tamanho da lista somente leitura.

7. Itera a lista e imprime seus elementos.

8. A tentativa de gravar na exibição somente leitura causa um erro de compilação.