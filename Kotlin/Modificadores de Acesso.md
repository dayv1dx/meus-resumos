# Tipos de modificadores

- **`private`**: Visível apenas dentro da classe.

- **`protected`**: Funciona como o `private`, mas é visível em subclasses.

- **`public`**: Visível em todo lugar, caso não seja definido é o padrão.

- **`internal`**: Lembra o `public`, mas sua visibilidade é restringida ao módulo, sendo então visível dentro de um mesmo módulo.

## Internal

Um app pode ser dividido em módulos, como por exemplo o Uber:

- motorista
- passageiro

são dois aplicativos diferentes, porém podem compartilhar elementos. Por isso são feitos no mesmo projeto.
