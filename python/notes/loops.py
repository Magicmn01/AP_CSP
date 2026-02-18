import random #library imported at the top always
start = 0

while start <= 10:
    print(start)
    start += 1

print("the loop is over")

goose = random.randint(1,25)

count = 1

while count != goose:
    print("duck")
    count += 1

print("goose!")

number = random.randint(1,20)

while True:
    guess = int(input("tell me a number between 1 and 20: "))
    if guess == number:
        print(f"you won! the nuumber was {number}!")
        break
    elif guess < number:
        print("guess higher")
    else:
        print("guess lower")




