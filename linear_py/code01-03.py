import PIL.Image as Img

img00 = Img.open("ebichan_marisol202009.jpg")
print(img00.size, img00.mode)
img01 = img00.convert('L')
img01.thumbnail((1500, 1500))
print(img01.size, img01.mode)
img01.save("gray_ebichan_marisol202009.jpg")
