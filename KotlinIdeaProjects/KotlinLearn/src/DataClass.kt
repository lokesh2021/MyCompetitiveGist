/*Important Points to consider before proceeding with DataClass in Kotlin
* -> Primary constructor needs to have at least one paramater
* -> All Primary Constructor needs to be marked as Val or Var
* -> Data Classes cannot be abstract, open, sealed or inner
* -> They cannot extend other Classes
* */

data class User(val name:String, val age: Int)