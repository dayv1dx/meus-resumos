Os construtores permitem fazer a configuração inicial de um objeto, o construindo da forma desejada.

## Construtores primários

~~~ kotlin
class Casa(cor: String, vagasGaragem: Int) { // class Casa( construtor primário)

    // propriedade ou atributo
    var cor: String 
    var vagasGaragem: Int 

    init{

        this.cor = cor
        this.vagasGaragem = vagasGaragem

    }
}

fun main(args: Array<String>){

    // instanciando a classe e criando um objeto
    val casa = Casa("azul", 3) 
}
~~~

## Construtores secundários

~~~ kotlin
class Casa{

    // propriedade ou atributo
    var cor: String 
    var vagasGaragem: Int 

    // construtor secundário
constructor(cor: String, vagasGaragem: Int){
    this.cor = cor
    this.vagasGaragem = vagasGaragem
}

}

fun main(args: Array<String>){

    // instanciando a classe e criando um objeto
    val casa = Casa("azul", 3) 
}
~~~