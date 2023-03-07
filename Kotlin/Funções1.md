# O que são Funções?

São blocos de código que executam uma determinada ação, são utilizadas para realizar operações específicas.

~~~ kotlin 
// fun NomeDaFuncao (parametro: Tipo, parametro2 :Tipo)
// fun de 'function'

fun exibirMensagem(nome: String, idade: Int){
    println("testando 1,2,3... printando $nome e $idade")
}

fun main (args: Array<String>){

    exibirMensagem("Dayv1dx", 25)
    var resultado = somar(10,5)
    println( resultado )
}

// funções com retorno
// fun NomeDaFuncao (parametro: Tipo, parametro2 :Tipo) : TipoRetorno
fun somar(num1: Int, num2: Int) : Int {
var total = num1 + num2
return total
}
~~~