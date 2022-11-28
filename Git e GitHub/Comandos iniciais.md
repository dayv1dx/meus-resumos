# Primeiros passos

## Criando um novo projeto:

- Criar uma nova pasta no PC onde será criado o repositório.

- Abrir o `Git Bash` nessa pasta.

- Com o Bash aberto, utilizar o comando `git init` para inicializar o repositório.

Depois de ter criado o reporitório local, é necessário fazer a conexão com o remoto no GitHub.

- Para isso é necessário utilizar o comando `git remote add origin <link do repositório>`

- `origin` é o nome utilizado para referenciar o nosso repo.

- O comando `git branch -M "main"` altera o nome da branch principal de "master "para "main" (isso é uma boa prática atualmente recomendada)

## Clonando um projeto

Como baixar um código?

Ao entrar em um repositório, seja o seu ou o de qualquer outra pessoa, terá um botão `Code`, que quando você clica aparece um link.

Você irá copiar esse link e levar ele lá pro nosso terminal

O comando para puxar o projeto para a sua máquina é o `git clone https://github.com/UsuarioExemplo/RepExemploTutorial.git`

Não é necessário criar um repositório antes disso, basta abrir o terminal e clonar o projeto e tudo aparecerá!