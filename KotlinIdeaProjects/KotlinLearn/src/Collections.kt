/*
Collections in Kotlin are used to store group of related objects in a single unit

   Types of Collections in Kotlin are:-

-> Lists: Ordered Collection with access to elements by indices
-> Sets: Collection of Unique Elements
-> Maps: Set of Key-Value Pairs
*/

//Lists
/*fun main(args: Array<String>) {
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
}*/


//Sets
/*fun main(args: Array<String>) {
    val numbers = setOf(2,4,6,8)
    println("Number of Elements : ${numbers.size}")
    if(numbers.contains(3)) println("Element is in the set")
    else println("No element found")

    val numbers2 = setOf(4,6,8,2)
    println("Sets are equal: ${numbers==numbers2}")
}*/


//Maps
fun main(args: Array<String>) {
    val maps = mapOf<String,Int>("key1" to 2,"key2" to 4,"key3" to 6,"key4" to 8)
    println("keys: "+maps.keys)
    println("Values: "+maps.values)
}
