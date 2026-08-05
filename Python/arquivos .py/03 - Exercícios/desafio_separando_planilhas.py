from pathlib import Path
import pandas as pd
import os

pasta_atual = Path(__file__).parent

arquivo = pasta_atual / 'clientes.xlsx'

tabela_clientes_dict = pd.read_excel(arquivo, sheet_name=None)

for nome_aba, tabela in tabela_clientes_dict.items():
    tabela.to_excel(pasta_atual / 'planilhas_separadas' / f'{nome_aba}.xlsx', index=False)

with pd.ExcelWriter(pasta_atual / 'planilha_consolidada' / 'clientes_consolidado.xlsx') as writer:
    for arquivo in Path(pasta_atual / 'planilhas_separadas').glob('*.xlsx'):
        df = pd.read_excel(arquivo)
        nome_aba = arquivo.stem
        df.to_excel(writer, sheet_name=nome_aba, index=False)