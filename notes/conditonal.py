number = 99

if number < 10 and number >= -9:
    print(f"{number} is a single digit number")
elif number < 100:
    print(f"{number} is a double digit")
else:
    print(f"{number} is a double digit number")
    print("....or is it?")
    new_number = number*number
    if new_number > 1000:
        print (f"surpise numuber {new_number}")


