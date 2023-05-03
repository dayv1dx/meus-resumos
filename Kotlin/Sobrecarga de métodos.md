# Sobrecarga de métodos

~~~ kotlin

class Usuario {

    // o nome do método pode ser igual
    //assinatura do método: nome + parametros e seus tipos
    fun logar (email: String, senha: String){
        println("usuário logado com email: $email e senha: $senha")
    }

    fun logar(numeroTlefone: String){
        println("usuário logado com telefone: $numeroTelefone")

    }
}