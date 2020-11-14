import kotlin.test.assertTrue

/*Regular Expression
-> ' ^ ' denotes beginning of expression
-> ' $ ' denotes end of expression
*/

fun main(args: Array<String>)
{
    val regex = """a([bc]+)d?""".toRegex()
    assertTrue(regex.containsMatchIn("xabcy"))

}