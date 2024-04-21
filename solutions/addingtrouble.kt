

fun main() {

  val nums = readLine()!!.split(" ").map{it.toInt()}

  if (nums.slice(0..1).sum() == nums[2]) {
    print("correct!")
  } else {
    print("wrong!")
  }
}