import javax.print.attribute.standard.PrinterLocation

fun main(args: Array<String>) {
    println("sub= ${getData(20, 40)}")
    ////
    /*Lambda Function*/
    var multiply = { num1: Int, num2: Int -> num1 * num2 }
    println(multiply(15, 6))
    /*Lambda Functions with return statements*/
    val myLambda:(Int) ->Unit ={p: Int ->
        println("Lambda Function to multiply using functions with return value: "+p)}
    Multiply(5,9,myLambda)
    //
    println("5! =" + fact(5))
    //


}

fun Multiply (x:Int,y:Int,myLambda:(Int)->Unit){
    val Multiply = x*y;
    myLambda(Multiply)
}

fun getData(vararg result: Int): Int {
    var sub = 0;
    result.forEach { n -> sub += n }
    return sub
}

fun fact(x: Int): Int {
    tailrec fun factorial(a: Int, b: Int): Int {
        if (a == 0) return b;
        else return factorial(a - 1, a * b)
    }
    return factorial(x, 1)
}