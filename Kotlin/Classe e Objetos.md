~~~ kotlin
class Casa { // classe sempre inicia com maiúscula

    // propriedade ou atributo
    var cor: String = ""

    // métodos
    fun abrirJanela(qtdJanelas: Int){ // passando parâmetros 
        println("abrir janelas total: $qtdJanelas")
    }

    fun abrirPorta(){
        println("abrir a porta")
    }

    // é possível chamar outros métodos dentro de um método
    fun abrirCasa(){
    
    // "this" é utilizado parar acessar um método ou propriedade dentro da própria classe
        this.abrirJanela()
        this.abrirPorta()        
    }

}

fun main(args: Array<String>){

    // instanciando a classe e criando um objeto
    val casa = Casa()
    casa.cor = "azul"
    casa.abrirCasa()
}
~~~