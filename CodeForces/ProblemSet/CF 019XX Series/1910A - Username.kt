import java.util.Scanner
fun main() {
    val scanner = Scanner(System.`in`)
    val tc = scanner.nextInt()
    repeat(tc) {
        var s = scanner.next()
        var index = s.length - 1
        while (s[index] > '9' || s[index] < '1') {
            index--
        }
        println(s.substring(0, index))
    }
}
