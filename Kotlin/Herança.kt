// A classe pai deve ter a palavra "open"
// Dessa forma é possível aplicar a relação de herança 
open class Animal{

    // Sobrescrevendo métodos
    // Também deve ter a palavra "open"
    open fun dormir(){
        println("Dormir")
    }

    fun correr(){
        println("Correr")
    }
}

// Em Kotlin a relação de herança é feita com " : "
// por padrão as classe não podem ser herdadas
class Cao : Animal(){

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
