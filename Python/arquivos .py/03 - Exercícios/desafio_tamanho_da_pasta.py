from pathlib import Path
import os

caminho = Path.home()/'Documents'
# tamanho = os.path.getsize()

def retorna_tamanho_arquivos(caminho):
    for diretorio in caminho.glob('*'):
        if diretorio.is_dir() and not diretorio.name.startswith('.'):
            tamanho_diretorio = 0
            for arquivo in diretorio.glob('**/*'):
                if arquivo.is_file():
                    tamanho_diretorio += os.path.getsize(arquivo)
            print(diretorio.name, '->', round(tamanho_diretorio/1024/1024, 2), 'MB')        
        
retorna_tamanho_arquivos(caminho)