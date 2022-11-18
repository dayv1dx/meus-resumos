# Trabalhando com Branches

**Criar uma nova branch**
```bash
git branch nome-branch

# Acessando a nova branch
git checkout nome-branch 

# Criando e acessando uma nova branch
git checkout -b nome-branch 

# Criando uma nova branch vazia
git checkout --orphan nome-branch 
```

**Baixar todas as branchs que estão online**
```bash
git fetch --all ou git remote update
```

**Criar uma branch local baseada na remota**
```bash
git fetch origin 

git checkout -b "feature-x" "origin/feature-x"
```

**Renomeiar branch local**
```bash
# Renomeia a brach localmente
git branch -m old-branch new-branch 

# Deleta a branch velha
git push --set-upstream origin new-branch

# Empurra a nova branch, define a branch local no track remoto
git push origin :old-branch  
```

**Retorna num ponto específico e cria uma nova branch**
```bash
git checkout hash-commit -b nome-nova-branch
```

**Renomeando branches**
```bash
git branch -m nome-branch
```

**Aplicando merge em branches**
```bash
# Precisa estar na branch de destino
git merge nome-branch 
```

**Visualizando todas as branches existentes no repositório**
```bash
# A branch corrente será marcada por um asterisco
git branch 
```

**Visualizando todas as branches locais e remotas**
```bash
git branch -a
```

**Deletando uma branch**
```bash
git branch -D nome-branch
```

**Deletando branch remota**
```bash
git push origin :nome-branch
```

## Stash

O comando `Stash` é como uma "caixinha" ou "estoque" onde podem ser guardadas algumas alterações de forma temporária, para evitar que, ao trocar de branch, seja levada alguma "sujeira" ou arquivo indesejado. Funciona como um Array, por isso é importante passar um contexto. Dessa forma, é possível identificar, pelo índice, onde está cada coisa.


``` bash
# Guarda os arquivos que estão no index/staging e no working drectory em uma "caixinha"

git stash

# Passando um contexto ao comando

git stash save "nome do contexto"

# Lista todas as "caixinhas"

git stash list

# Recupera os arquivos do stash de acordo com o índice

git stash pop "índice do stash"

# Limpa todos os stash

git stash clear

```
