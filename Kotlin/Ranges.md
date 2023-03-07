# Ranges

Existe um conjunto de ferramentas para definir intervalos em Kotlin. Segue alguns exemplos:

~~~ kotlin
fun main() {

    for(i in 0..3) {             // 1
        print(i)
    }
    print(" ")

    for(i in 0 until 3) {        // 2
        print(i)
    }
    print(" ")

    for(i in 2..8 step 2) {      // 3
        print(i)
    }
    print(" ")

    for (i in 3 downTo 0) {      // 4
        print(i)
    }
    print(" ")


}
~~~

1. Itera em um intervalo de 0 a 3 (inclusive), ou seja, é um intervalo fechado.

2. Itera em um intervalo de 0 a 3 (exclusive), ou seja, é um intervalo aberto.

3. Itera em um intervalo com uma etapa de incremento personalizada (step)

4. Itera sobre um intervalo de forma decremental.
  
Os intervalos de caracteres (char) também são suportados:

~~~ kotlin
fun main() {

    for (c in 'a'..'d') {        // 1
        print(c)
    }
    print(" ")

    for (c in 'z' downTo 's' step 2) { // 2
        print(c)
    }
    print(" ")
}
~~~ 

1. Itera sobre um intervalo de caracteres de ordem alfabética
2. Também é possível usar o `step` e o `down to`

Os intervalos também são úteis nas declarações condicionais.

~~~ kotlin
fun main() {

    val x = 2
    if (x in 1..5) {            // 1
        print("x is in range from 1 to 5")
    }
    println()

    if (x !in 6..10) {          // 2
        print("x is not in range from 6 to 10")
    }
}
~~~ 

1. Verifica se um valor está dentro do intervalo
2. `!` é o operador de negação