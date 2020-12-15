import UIKit

var str = "Hello, playground"
1+255
var a = 1
var b = 16
var c = 3
var ans = a + b + c

var name = "yuri_ebihara"
var value = 3.14
var aaa:String
var bbb:Double = 128
//var ccc:Int = 12.56
//bbb * c
bbb*value
let d:Int
var e = 12
let f = 15
d = e*f
//d = 44
let message = """
    ピカチュウの10まんボルト！
    ""効果は抜群だ！""
"""
let ddd = "\(e*f)ダメージ！"

var numList = [1,2,3,4,5,6,7,8,9]
var sum = 0
for num in numList
{
    sum += num
}
print("合計は\(sum)。")

for x in 0..<360*2
{
    let radian = Double(x)*(Double.pi/180)
    let y = sin(radian) //ループ毎に変数のscopeは消滅する
    print(x,y)
}
//print(y)

var stars = ""
for _ in 1...5
{
    stars += "★"
    print(stars)
}
print(stars)
