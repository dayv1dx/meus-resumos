from pathlib import Path
import shutil
import os

pasta_atual = Path(__file__).parent
pasta_a_organizar = pasta_atual / 'arquivos_desafio'
pasta_organizada = pasta_atual / 'arquivos_organizados'
pasta_backup = pasta_atual / 'backup'

if pasta_organizada.exists():
    shutil.rmtree(pasta_organizada)

pasta_organizada.mkdir()

if not pasta_backup.exists():
    pasta_backup.mkdir()

for arquivo in pasta_a_organizar.glob("**/*"):
    if arquivo.is_file():
        pasta_organizada_c_extensao = pasta_organizada / arquivo.suffix[1:]
        if not pasta_organizada_c_extensao.exists():
            pasta_organizada_c_extensao.mkdir()
        shutil.copy(arquivo, pasta_organizada_c_extensao)