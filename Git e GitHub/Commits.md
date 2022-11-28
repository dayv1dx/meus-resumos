# Revertendo commits ⏪

São utilizados basicamentes dois comandos para essa finalidade, sendo eles:
```
- git revert
- git reset
```
Esses comandos podem ser utilizados de duas formas, se movendo a algum commit específico ou orientado a HEAD.

1º forma
``` bash
# Apontando para qual commit deseja voltar

git reset <hash-do-commit> 
```
2º forma
``` bash
# O número no fim do comando indica quantas "casas" ele vai se mover para trás em relação a HEAD

git reset HEAD~1 

```
## **`git revert`**

Manipula os commits realizados, quando executado, ele move a `HEAD` até onde foi apontado e gera automaticamente um commit revertendo tudo aquilo que o commit apontado tinha feito

## **`git reset`**

Esse comando manipula diretamente os arquivos e seus estados, possui três variações ou tags.


- Variações ou tags

```
          --soft
git reset --mixed 
          --hard
```
1. Utilizando a tag `--soft` todos os arquivos manipulados voltam para o staging/index, é basicamente a forma inversa do `git add`

2. A tag `--mixed` faz os arquivos retornarem para o working dir.

3. Já a `--hard`, diferente das anteriores, vai limpar tudo. Esse tag exclui todos os arquivos daquele commit.

# Estruturando commits

A estrutura se dá da seguinte forma:

- **Assunto**
  - Curto e compreensível com até 50 caracteres
  - Começar com letra maiúscula e não terminar em ponto "."
  - Escrito de forma imperativa
- **Corpo**
  - Adicione detalhes ao commit
  - Identifique sua audiência
  - Explique tudo
  - Use Markdown
- **Rodapé**
  - Referencie assuntos relacionados
  - É opcional

Ao utilizar o comando `git commit` é aberto o editor padrão do Git, o **VIM**, e nele é feita toda a estrutura do commit. Segue um exemplo:

~~~ bash
Assunto commit
# quebrar linha para separar o assunto e corpo
Corpo commit, esse commit modifica o README.md adicionando uma nova descrição
# quebrar mais uma linha
Rodapé
~~~

No rodapé é possível usar a palavra reservada `Closes #N` onde esse **`N`** faz referência a uma _Issue_ do repositório que, após esse commit, será fechada.

Para sair do **VIM** basta apertar `Esc` para sair do modo de edição e depois digitar " :wq", em seguida fazer o `git push`
## **Escrevendo de forma imperativa:**

Se aceito, esse commit `adiciona` método de pagamento

Se aceito, esse commit `atualiza` configurações do banco de dados

Se aceito, esse commit `remove` código redundante