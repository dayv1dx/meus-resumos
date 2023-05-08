# Lateinit

Utilizado para inicializar uma propriedade posteriormente.

~~~ kotlin
 class Produto {
    // se o "valor" do atributo não for configurado posteriormente vai dar um erro
    lateinit var descricao: String 
 }

 fun main(){

    val produto = Produto()
    produto.descricao = "Iphone 13"

 }