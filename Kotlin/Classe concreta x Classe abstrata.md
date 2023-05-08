# Classes Abstratas e Concretas

Classe abstratas não podem ser instanciadas, pois têm métodos muito genéricos. Nesse tipo de classe não é necessário utilizar a palavra `open`, pois ela já é feita para ser herdada.

Métodos também podem ser abstratos e nesse caso a classe filha é obrigada a implementá-lo, entretanto o mesmo não possui um "corpo", linha 19.

~~~ kotlin
 
abstract class Animal{ // classe abstrata

    open fun dormir(){
        println("Dormir")
    }

    fun correr(){
        println("Correr")
    }

    abstract fun exemplo()
}

class Cao : Animal(){ // classe concreta

    // Sobrescrevendo métodos
    override fun dormir(){
    // Para aproveitar o parte do método sobrescrito é utilizada a palavra "super"
        super.dormir() // chamando o método pai
        println("como cão") // incrementando o método pai
    }

}

class Passaro : Animal(){

}

fun main(args: Array<String>) {

    val cao = Cao()
    cao.dormir()
    cao.correr()

    
    val passaro = Passaro()
    passaro.dormir()

}
