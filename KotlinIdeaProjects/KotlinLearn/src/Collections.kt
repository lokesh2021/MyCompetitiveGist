/*
Collections in Kotlin are used to store group of related objects in a single unit
-> Lists: Ordered Collection with access to elements by indices
*/

fun main(args: Array<String>) {
    var result = listOf<Int>(1, 3, 3, 4, 5)
    println("Printing elements in List")
    for(i in result)
        println(i)
    println("Printing elements in List with its Index")
    for ((i,j) in result.withIndex())
        println("$i , $j")

    val numbers = mutableListOf(2,3,4,5)
    numbers.add(5)
    println("List after adding 5"+numbers)
    numbers.removeAt(2)
    println("List after removing element at 2"+numbers)
    numbers.shuffle()
    println("List after Shuffling"+numbers)
}
