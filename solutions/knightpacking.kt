import java.util.Scanner

fun main() {
    val sc = Scanner(System.`in`)
    val number = sc.nextInt()
    when {
        number % 2 == 1 -> print("first")
        else -> print("second")
    }
}