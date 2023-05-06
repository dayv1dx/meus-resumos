# Interface

Pode-se dizer a grosso modo, que um interface é um contrato quando assumido por uma classe, deve ser executado. É utilizada, pois podemos ter muitos objetos (classes) que podem possuir a mesma ação (métodos) porém, podem executá-las de maneiras diferentes.

~~~ kotlin

interface Presidenciavel{
    fun candidatarSe()
}


abstract class Pessoa{
    fun comer() = println("comer")
}

class DesenvolvedorAndroid : Pessoa(), Presidenciavel {}

class DesenvolvedorWeb : Pessoa(){}

class DesenvolvedorIOS : Pessoa(), Presidenciavel {
    override fun candidatarSe(){
        println("Fazer o processo para se candidatar")
    }

}




fun main(){

    val devAndroid = DesenvolvedorAndroid()
    devAndroid.candidatarSe()
}