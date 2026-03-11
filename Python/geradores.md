# Geradores

São tipos especiais de iteradores, ao contrário das listas ou outros iteráveis, não armazenam todos os seus valores na memória. São definidos usando funções regulares, mas, ao invés de retornar valores usando `return`, utilizam `yield`.

Cararacterísticas de geradores:

- Uma vez que um item gerado é consumido, ele é esquecido e não pode ser acessado novamente.
- O estado interno de um gerador é mantido entre chamadas.
- A execução de um gerador é pausada na declaração "yield" e retomada daí na próxima vez que ele for chamado.

Recuperando dados de uma API

- Solicitar dados por páginas (paginação).
- Fornecer um produto por vez entre as chamadas.
- Quando todos os produtos de uma página forem retornados, verificar se existem novas páginas.
- Tratar o consumo da API como uma lista Python.

~~~ py
def meu_gerador(numeros: list[int]):
    for numero in numeros:
        yield numero * 2


for i in meu_gerador(numeros=[1, 2, 3]):
    print(i)
~~~ 