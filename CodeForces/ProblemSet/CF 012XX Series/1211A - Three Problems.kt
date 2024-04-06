fun main() {
    val n = readLine()!!.toInt()
    val r = readLine()!!.split(" ").map { it.toInt() }

    var mx = Int.MIN_VALUE
    var mn = Int.MAX_VALUE
    var mxi = -1
    var mni = -1

    for (i in r.indices) {
        val num = r[i]
        if (num > mx) {
            mx = num
            mxi = i
        }
        if (num < mn) {
            mn = num
            mni = i
        }
    }

    var m = 0
    var mi = -1
    for (i in r.indices) {
        if (r[i] != mx && r[i] != mn) {
            m = r[i]
            mi = i
            break
        }
    }

    if (m != 0 && (mx != m && m != mn && mx != mn)) {
        println("${mni + 1} ${mi + 1} ${mxi + 1}")
    } else {
        println("-1 -1 -1")
    }
}
