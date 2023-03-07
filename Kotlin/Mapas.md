# Mapas (Map)

É uma coleção de pares chave/valor, onde cada chave é única e é usada para recuperar o valor correspondente.

- Para criar Mapas existem as funções `mapOf()` e `mutableMapOf()`

- Uma exibição somente leitura de um conjunto mutável pode ser obtida convertendo-a em `Map`. 

~~~ kotlin
const val POINTS_X_PASS: Int = 15
val EZPassAccounts: MutableMap<Int, Int> = mutableMapOf(1 to 100, 2 to 100, 3 to 100)   // 1
val EZPassReport: Map<Int, Int> = EZPassAccounts                                        // 2

fun updatePointsCredit(accountId: Int) {
    if (EZPassAccounts.containsKey(accountId)) {                                        // 3
        println("Updating $accountId...")                                               
        EZPassAccounts[accountId] = EZPassAccounts.getValue(accountId) + POINTS_X_PASS  // 4
    } else {
        println("Error: Trying to update a non-existing account (id: $accountId)")
    } 
}

fun accountsReport() {
    println("EZ-Pass report:")
    EZPassReport.forEach {                                                              // 5
        k, v -> println("ID $k: credit $v")
    }
}

fun main() {
    accountsReport()                                                                    // 6
    updatePointsCredit(1)                                                               // 7
    updatePointsCredit(1)                                                               
    updatePointsCredit(5)                                                               // 8 
    accountsReport()                                                                    // 9
}
~~~ 

1. Cria um mutável Map.

2. Cria uma exibição somente leitura do arquivo Map.

3. Verifica se a Mapchave 's existe.

4. Lê o valor correspondente e o incrementa com um valor constante.

5. Itera imutável Mape imprime pares chave/valor.

6. Lê o saldo de pontos da conta, antes das atualizações.

7. Atualiza uma conta existente duas vezes.

8. Tenta atualizar uma conta inexistente: imprime uma mensagem de erro.

9. Lê o saldo de pontos da conta, após as atualizações.