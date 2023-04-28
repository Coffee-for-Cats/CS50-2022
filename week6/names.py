import sys

names = ["bill", "charlie", "Fred", "Lucas", "Maria", "Ron"]

if "Ron" in names:
    print("Found!")
    sys.exit(1)

print("Not found!")