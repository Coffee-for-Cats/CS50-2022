import csv

houses = {
    "Gryfindor": 0,
    "Hufflepuff": 0,
    "Ravenclaw": 0,
    "Slytherin": 0
}

with open("hogwarts.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        house = row["House"]
        houses[house] += 1

for house in houses:
    count = houses[house]
    print(f"{house}: {count}")