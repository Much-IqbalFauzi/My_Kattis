

fun main() {
  val col = readLine()!!.toFloat()
  val row = readLine()!!.toFloat()

  var empty = 0
  for (i in 1..row.toInt()) {
    val code = readLine()!!

    for (ch in code) {
      if (ch == '.') {
        empty += 1
      }
    }
  }

  print(empty / (col * row))
}