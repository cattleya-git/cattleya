let score = 255
var result: String = ""

if score >= 256
{
	result = "over"
}
else if score == 256
{
	result = "equal"
}
else if score <= 256
{
	result = "under"
}
print(result)
