//Inheritence

open class Kotlin{  //open : makes sure that the base class can be accessed by derived class
    open fun run()
    {
        println("Person can run")
    }
}
class Derived: Kotlin(){

    override fun run()
    {
        println("Person can run")
    }
}


fun main(args: Array<String>)
{
    var derived = Derived()
    derived.run()
}