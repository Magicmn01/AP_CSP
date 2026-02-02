numbers = [2,4,6,54,3,213,5,78,9,653,22,34]
names = ["alex", "liz", "jake", "jessica", "tia"]

print(len(names))
names[0] = "eric"
names.append("jayshree")# adds to the end of the list
index = names.index("vienna")
names.pop(3) #removes item from the list based on index (or the end if no index is given)
print(names)

for name in names: 
    print(f"hello {name}")


for number in numbers:
    print(f"{number} - 10 = {number-10}")