# Companion object

É utilizado para definir atributos ou métodos associados a classe e não ao objeto, onde esses podem ser acessados sem a necessidade de uma instância.

~~~ kotlin

class Carro (var modelo: String = "", var velocidade: Int = 0){    

    companion object{
        const val VELOCIDADE_MAX_PERMITIDA = 120
        fun exibirMsgVelocidadeMax(){
            println("velocidade máxima: $VELOCIDADE_MAX_PERMITIDA")
        }
    }

}

fun main(){
    Carro.exibirMsgVelocidadeMax()
}