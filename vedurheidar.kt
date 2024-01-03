

fun main() {
  val current = readLine()!!.toInt()
  val testCase = readLine()!!.toInt()

  for ( i in 1..testCase) {
    val road = readLine()!!.split(" ")
    if (current <= road[1].toInt()) {
      println("${road[0]} opin")
    } else {
      println("${road[0]} lokud")
    }
  }
}