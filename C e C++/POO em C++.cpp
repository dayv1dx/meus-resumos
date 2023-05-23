#include<iostream>

using namespace std;


class Pessoa {
    
    private: // atributos
        string nome;
        int id;
        int idade;
        
    public: 
    
        // declaração dos métodos "get" e "set"
        void setNome( string _nome );
        string getNome();
        
        void setId( int _id );
        int getId();
        
        void setIdade( int _idade );
        int getIdade();
        
        // declaração do construtor
        Pessoa( int _id, int _idade, string _nome);
};

// implemetação do construtor
Pessoa::Pessoa( int _id, int _idade, string _nome){
    id = _id;
    idade = _idade;
    nome = _nome;
}

// implementação dos métodos "get" e "set"
void Pessoa::setNome( string _nome ){
    nome = _nome;
}

string Pessoa::getNome(){
    return nome;
}

void Pessoa::setId( int _id ){
    id = _id;
}

int Pessoa::getId(){
    return id;
}

void Pessoa::setIdade( int _idade ){
    idade = _idade;
}

int Pessoa::getIdade(){
    return idade;
}


int main() { 
    
    Pessoa pessoa = Pessoa(0, 25, "Dayv1dx");
    
  //pessoa.id = 0;
  //pessoa.idade = 26;
  //pessoa.nome = "Nome";
    
    //pessoa.setNome("Dayv1dx");
    cout << "NOME: " << pessoa.getNome() << endl;
    
    //pessoa.setIdade( 25 );
    cout << "IDADE: " << pessoa.getIdade() << endl;
    
    //pessoa.setId( 0 );
    cout << "ID: " << pessoa.getId() << endl;
    
    return 0;
}


