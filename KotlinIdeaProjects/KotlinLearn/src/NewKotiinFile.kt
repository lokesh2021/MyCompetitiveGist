fun main(args : Array<String>)
{
    println("sub= ${getData(20,40)}")
}

fun getData(vararg result: Int):Int
{
    var sub = 0;
    result.forEach {n -> sub+=n}
    return sub
}