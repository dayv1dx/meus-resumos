# Lendo e escrevendo arquivos

## Construindo caminhos com pathlib

Uma das vantagens de utilizar esse biblioteca é poder usar a barra '/' e qualquer OS vai processar essa informação

~~~ py
from pathlib import Path

caminho = Path("primeira_pasta/segunda_pasta")

print("caminho") # primeira_pasta\segunda_pasta
print(type(caminho)) # <class 'pathlib.WindowsPath'>
print(Path.home()) # C:\Users\dayv1dx
~~~

## Manipulando Caminhos de Arquivos

~~~ py
from pathlib import Path

## Retornando caminho do diretório de trabalho atual (Current Work Directory)
print(Path.cwd())

# Esse caminho é absoluto?
print(Path.cwd().is_absolute()) #True

# Retornando caminho da primeira pasta
print(Path(primeira_pasta))

# O caminho da 'primeira_pasta' é absoluto?
print(Path(primeira_pasta).is_absolute()) # False

# Garantindo que estamos retornando o caminho para a pasta do script
print(__file__)

# Retornando a pasta onde está o script
print(Path(__file__).parent)

# Criando um caminho absoluto para a 'primeira_pasta'
print(Path(__file__).parent / 'primeira_pasta')
~~~ 

## Trabalhando com partes do caminho

~~~ py
from pathlib import Path

camiho_arquivo = Path(__file__)

# Printando a pasta raiz
print(caminho_arquivo.anchor) # c:\

# Printando o nome do arquivo
print(caminho_arquivo.anchor) # manipulando_arquivos.py

# Printando a base do nome do arquivo sem extensão
print(caminho_arquivo.stem) # manipulando_arquivos

# Printando a extensão
print(caminho_arquivo.suffix) # .py
~~~

## Retornando arquivos em uma pasta

~~~ py
import os

# listando arquivos em uma pasta
print(os.listdir(Path.cwd()))
print(os.listdir(Path.cwd().glob(*.py)))
print(os.listdir(Path.cwd().glob(**/*)))
~~~

## Copiando, Movendo e Deletando Arquivos

~~~ py
from pathlib import Path
import shutil # módulo baseado no 'os'
import os

# Copiando arquivos com copyfile
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'texto.txt'
caminho_arquivo_destino = pasta_atual / 'destino1' / 'texto1.txt'

shutil.copyfile(caminho_arquivo, caminho_arquivo_destino)

# Copiando arquivo com copy2, copia o arquivo e mantém os metadados originais.
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'texto.txt'
caminho_arquivo_destino = pasta_atual / 'destino2'

shutil.copy2(caminho_arquivo, caminho_arquivo_destino)

# Movendo arquivos
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'texto.txt'
caminho_arquivo_destino = pasta_atual / 'destino1'

shutil.move(caminho_arquivo, caminho_arquivo_destino)

# Deletando arquivos
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'texto.txt'

os.remove(caminho_arquivo)

# Criando pasta
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'destino4'
caminho_pasta_destino.mkdir(exist_ok=True) # essa flag verifica se a pasta que irá ser criada já existe.

# Criando pasta com todas as pastas anteriores necessárias
pasta_atual = Path(__file__).parent
caminho_arquivo = pasta_atual / 'destino5' / 'destino5-1'
caminho_pasta_destino.mkdir(parents=True)

# Copiando pastas
pasta_atual = Path(__file__).parent
shutil.copytree(pasta_atual / 'destino1', pasta_atual / 'destino2')

# Deletando pastas
pasta_atual = Path(__file__).parent
pasta_remover = pasta_atual / 'destino1'
pasta_remover.rmdir() # apenas deleta pastas vazias
shutil.rmtree(pasta_remover) # deleta pastas com conteúdo

# Compactando arquivos
pasta_atual = Path(__file__).parent
nome_arquivo = pasta_atual / 'compactado'

shutil.make_archive(nome_arquivo, 'zip', pasta_atual)

# Descompactando arquivos
pasta_atual = Path(__file__).parent
nome_arquivo = pasta_atual / 'compactado.zip'
pasta_descompactada = pasta_atual / 'descompactada'

shutil.make_archive(nome_arquivo, pasta_descompactada, 'zip')
~~~

## Arquivos de texto

~~~ py
from pathlib import Path
import shutil
import os

# maneira não recomendada
pasta_atual = Path(__file__).parent
lista = open(pasta_atual/'lista_de_compras.txt')
print(lista.read())

lista.close()

# lendo arquivos de forma recomendada
with open(pasta_atual/'lista_de_compras.txt', mode='r') as lista:
    print(lista.read())

# lendo linha a linha
with open(pasta_atual/'lista_de_compras.txt', mode='r') as lista:
    linha = lista.readline()
    while linha != ''
        print(linha)
        linha = lista.readline()

# lendo todas as linhas
with open(pasta_atual/'lista_de_compras.txt', mode='r') as lista:
    print(lista.readlines()) # retorna uma lista

# escrevendo arquivo

itens_ja_comprados = ['farinha', 'fermento', 'agua']

with open(pasta_atual/'lista_de_compras_atualizada.txt', mode='w') as lista_atualizada:
    for item in itens_lista:
        if not item.replace('\\n','') in itens_ja_comprados:
            lista_atualizada.write(item)
    
~~~ 
