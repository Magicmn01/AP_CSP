def hello(name):
    print(f'hello{name}!')

def full_name(frist_name, last_name):
    return f'{frist_name} {last_name}'

print(f'hello {full_name("atticus", "pereyra")}')
person_one = full_name("bob", "john")
print(f'the second person is {person_one}')
person = full_name(" smith", "ranger")
hello(person)
hello(" platipus")


def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x 
    return total

for y in range(1,10):
    print(f'the factorial of {y} is {factorial(y)}')

num=1 

def add():
    num = 1
    num =+ 1
    return num 

print(add())