# Verificações de igualdade

Kotlin usa `==` para comparação estrutural e `===` para comparação referencial.

~~~ kotlin
fun main() {


  val authors = setOf("Shakespeare", "Hemingway", "Twain")
  val writers = setOf("Twain", "Shakespeare", "Hemingway")

  println(authors == writers)   // 1
  println(authors === writers)  // 2

}
~~~

A comparação de dados do tipo de estrutura `setOf` é diferente da `listOf`

1. Retorna `true` porque chama `authos.equals(writers)`. Estruturalmente as duas listas têm os mesmos valores.

2. Retorna `false` porque as duas listas têm referências distintas.