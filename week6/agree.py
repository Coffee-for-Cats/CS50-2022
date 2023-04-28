from cs50 import get_string

# Pega um valor do usuário, pega a primeira letra da string (y ou n) e coloca ela em lowercase
s = get_string("Do you agree? ")[0].lower()

if (s == "y"):
    print("Agreed.")
elif (s == "n"):
    print("Not agreed.")