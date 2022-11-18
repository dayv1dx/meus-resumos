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

