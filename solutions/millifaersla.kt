

fun main() {

  var res = "Monnei"
  val a = readLine()!!.toInt()
  val b = readLine()!!.toInt()
  val c = readLine()!!.toInt()

  if (a > b && b < c) {
    res = "Fjee"
  }

  if (a > c && c < b) {
    res = "Dolladollabilljoll"
  }

  print(res)

}