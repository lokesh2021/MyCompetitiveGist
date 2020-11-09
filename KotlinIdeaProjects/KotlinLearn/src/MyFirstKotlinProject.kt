import java.util.*

fun main(args : Array<String>)
{

//class
/*    var var_name=Kotin()
    var_name.name="Hello World"
    print("i just printed ${var_name.name}")*/


//DataTypes
    /*val a: Int = 100
    val d: Double = 10.00
    val f: Float = 100.00f
    val s: Short = 24
    val b: Byte = 2
    val c : Char = 'K'

    println("Value of Integer : ${a}")
    println("Value of Double : ${d}")
    println("Value of Float : ${f}")
    println("Value of Short : ${s}")
    println("Value of Byte : ${b}")
    println("Value of Char : ${c}")*/


//Input Functions
    /*println("Enter your Name: ")
    val name = readLine()
    println("Enter your Age: ")
    var age : Int = Integer.valueOf(readLine())
    println("Your Name is: ${name} and your Age is : ${age}")*/


//Arrays
    /*var num = arrayOf(1,2,3,4)
    println("arrayOf "+Arrays.toString(num))       //  [1, 2, 3, 4]
    var num1 = IntArray(5,{i -> i*2+3})
    println("IntArray "+Arrays.toString(num1))      //  [3, 5, 7, 9, 11]
    println("get Index 2 element from 'num' array: "+num.get(2))
    num.set(2,6)
    println("'num' array after setting/changing the value of Index 2: "+Arrays.toString(num))*/       //  [1, 2, 6, 4]


//Control Flow Statements
    /*var num :Int = 40
    var num1:Int = 20

    if(num>num1)
        println(num)*/

    /*for(i in 1..5)
        println(i)*/

    /*var n:Int =0;
    while(n<4)
    {
        println(n)
        n++
    }*/


 //when (Switch Statement in Kotlin)
    var x:Int=20
    /*when(x){
        0,1 -> println("x=0 or x=1")
        else -> println("otherwise")
    }*/

    /*when(x){
        in 1..10 -> println("X is in the range")
        !in 10..20 -> print("X not in range")
        else -> println("none of the above")
    }*/

    when(x){
        1 -> println("one")
        2 -> println("Two")
        3 -> println("Three")
        else -> println("not accesible")
    }







}