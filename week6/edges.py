from PIL import Image, ImageFilter

before = Image.open("input.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("output.bmp")