# Ambientes Virtuais (venvs)

Os ambientes virtuais (ou venvs, como
são comumente chamados) permitem que você crie instalações isoladas do Python para cada projeto, evitando conflitos de dependências.

Cada ambiente virtual funciona como uma cópia independente da instalação do Python. Dentro desse ambiente, você pode instalar pacotes específicos sem interferir em outros projetos.

Assim, você pode ter, por exemplo:

- Um ambiente virtual para o Projeto A, rodando Python 3.12 e Pandas 1.5.0.
- Um ambiente virtual para o Projeto B, rodando Python 3.12 e Pandas 2.2.1.
- Outros ambientes para diferentes projetos, cada um com suas próprias dependências.
Isso garante que cada projeto funcione corretamente sem afetar os outros.


## Comandos venv

No exemplo a seguir existe uma pasta chamada __"meus_projetos"__ e, dentro dela, duas subpastas:  __"projeto_A"__ e  __"projeto_B"__

- Listando os pacotes instalados globalmente:
~~~ cmd
pip list
~~~

- Criando o ambiente virtual A:
~~~ cmd
cd Desktop\meus_projetos\projeto_A

python -m venv venv-projeto-A 
~~~
Isso criará uma pasta chamada __venv-projeto-A__, que conterá os arquivos do ambiente virtual.

- Ativando o ambiente virtual:
~~~ cmd
venv-projeto-A\Scripts\activate
~~~
Quando ativado, o nome do ambiente virtual aparecerá no início do prompt do terminal, indicando que ele está ativo. Agora, qualquer instalação de pacotes com pip install será feita exclusivamente dentro do ambiente virtual.

- Criando e ativando o ambiente virtual B:
~~~ cmd
cd Desktop\meus_projetos\projeto_B

python -m venv venv-projeto-B

venv-projeto-B\Scripts\activate
~~~ 

- Instalando uma versão específica do Pandas
~~~ cmd
pip install pandas==1.5.0
~~~ 

- Gerenciando dependências com `requirements.txt`

Para facilitar a instalação de pacotes em outro ambiente, podemos gerar um arquivo `requirements.txt` com todas as dependências:
~~~ cmd
pip freeze > requirements.txt
~~~ 
Esse arquivo conterá a lista de pacotes e versões necessárias para o projeto. Para instalar as dependências em outro ambiente virtual, basta executar:
~~~ cmd
pip install -r requirements.txt
~~~

- Desativando o ambiente virtual
~~~ cmd
deactivate
~~~