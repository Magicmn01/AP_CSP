# AP Finacial calculator
def monthly(bill):
     return float(input(f"what is your monthly {bill}"))
income = monthly("income: ")

rent = monthly("rent: ")

utilities = monthly("utilities: ")

groceries = monthly("groceries: ")

transportaiton = monthly("transportaiton: ")

saving = round(income*0.15 , 2)
def percent(bills):
     return round(({bills}/income)*100,2)
print("your rent is $" , rent , "and that is" , percent(rent) , "%" , "of your income.")
print("your utilities is" , "$" , utilities , "and this is", percent(utilities) , "%" , "of your income.")
print("your groceries is" , "$" , groceries , "and that is", (round((groceries/income)*100,2)) , "%" , "of your income.")
print("your transportsaiton is" , "$" , transportaiton , "and that is", (round((transportaiton/income)*100,2)) , "%" , "of your income.")
print("you should be saving" , "$" , saving , "that is" , "15" , "%" , "of your income")
print("your have" , "$" , (round(income-rent-saving-utilities-transportaiton,2)) , "of spending money each month")