# AP Finacial calculator

income = float(input("what is your monthly income? "))

rent = float(input("what is your monthly reant/mortage? "))

utilities = float(input("what is your monthly utilities bill? "))

groceries = float(input("what is your monthly groceries bill? "))

transportaiton = float(input("what is your monthly transportation? "))

saving = round(income*0.15 , 2)

print("your rent is $" , rent , "and that is" , (round((rent/income)*100,2)) , "%" , "of your income.")
print("your utilities is" , "$" , utilities , "and this is", (round((utilities/income)*100,2)) , "%" , "of your income.")
print("your groceries is" , "$" , groceries , "and that is", (round((groceries/income)*100,2)) , "%" , "of your income.")
print("your transportsaiton is" , "$" , transportaiton , "and that is", (round((transportaiton/income)*100,2)) , "%" , "of your income.")
print("you should be saving" , "$" , saving , "that is" , "15" , "%" , "of your income")
print("your have" , "$" , (round(income-rent-saving-utilities-transportaiton,2)) , "of spending money each month")