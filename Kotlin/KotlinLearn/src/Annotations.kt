/*
Annotations in Kotlin : Annotations are means of attaching metadata to Code.
-> Target
-> Retention
-> Repeatable
-> MustBeDocumented
*/

@Edureka
class Course {
    @Edureka
    fun baz(@Edureka Course: Int): Int {
        return (@Edureka 1)
    }
}

@Target(AnnotationTarget.CLASS, AnnotationTarget.VALUE_PARAMETER, AnnotationTarget.FUNCTION, AnnotationTarget.EXPRESSION)
@Retention(AnnotationRetention.SOURCE)
annotation class Edureka
