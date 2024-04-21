

fun main() {
  val nx = readLine()!!.split(" ").map{it.toInt()}

  var total = 0
  for (i in 0..nx[0] - 1) {
    total = total + readLine()!!.toInt()
  }

  if (total <= nx[1]) {
    print("Jebb")
  } else {
    print("Neibb")
  }
}