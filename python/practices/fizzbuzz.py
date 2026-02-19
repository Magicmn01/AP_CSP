start = 1
while start <= 50:
    if start%3 == 0 and start%5 == 0:
        print("fizzbuzz")
    elif start%5 == 0:
        print("buzz")
    elif start%3 == 0:
        print("fizz")
    else:
        print(start)
    start += 1