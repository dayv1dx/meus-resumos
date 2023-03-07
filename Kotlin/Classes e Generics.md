# Classes

Classe é um modelo para criação de objetos.

~~~ kotlin
class Customer                                  // 1

class Contact(val id: Int, var email: String)   // 2

fun main() {

    val customer = Customer()                   // 3
    
    val contact = Contact(1, "mary@gmail.com")  // 4

    println(contact.id)                         // 5
    contact.email = "jane@gmail.com"            // 6
}
~~~ 

1. Declaração de uma classe simples

2. Declaração de uma classe com um construtor personalizado

3. Instanciando a classe simples

4. Instanciando a classe com parâmetros a serem passados no construtor

5. Acessando a propriedade `id` do objeto `contact`

6. Reatribuindo a propriedade `email`, visto que ela foi definida como `var`

## Generics

**Generics** são um mecanismo de genericidade que se tornou padrão nas linguagens modernas. As classes e funções genéricas aumentam a capacidade de reutilização do código ao encapsular a lógica comum que é independente de um tipo genérico específico, como a lógica dentro de a `List<E>` é independente do que `E` é.

- **Generic Classes**
~~~ kotlin
class MutableStack<E>(vararg items: E) {              // 1

  private val elements = items.toMutableList()

  fun push(element: E) = elements.add(element)        // 2

  fun peek(): E = elements.last()                     // 3

  fun pop(): E = elements.removeAt(elements.size - 1)

  fun isEmpty() = elements.isEmpty()

  fun size() = elements.size

  override fun toString() = "MutableStack(${elements.joinToString()})"
}

fun main() {
  val stack = MutableStack(0.62, 3.14, 2.7)
  stack.push(9.87)
  println(stack)

  println("peek(): ${stack.peek()}")
  println(stack)

  for (i in 1..stack.size()) {
    println("pop(): ${stack.pop()}")
    println(stack)
  }
}
~~~ 

- **Generic Functions**
~~~ kotlin
class MutableStack<E>(vararg items: E) {              // 1

  private val elements = items.toMutableList()

  fun push(element: E) = elements.add(element)        // 2

  fun peek(): E = elements.last()                     // 3

  fun pop(): E = elements.removeAt(elements.size - 1)

  fun isEmpty() = elements.isEmpty()

  fun size() = elements.size

  override fun toString() = "MutableStack(${elements.joinToString()})"
}


fun <E> mutableStackOf(vararg elements: E) = MutableStack(*elements)

fun main() {
  val stack = mutableStackOf(0.62, 3.14, 2.7)
  println(stack)
}
~~~ 