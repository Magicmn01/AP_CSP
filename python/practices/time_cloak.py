# AP time of day

time = int(input("what is the military time? "))
if time <= 5 and time > 0:
   print("it's to early go back to bed!!!")
elif time > 5 and time <= 11:
   print("have a wonderful morning")
elif time > 11 and  time <= 16:
   print("good afternoon")
elif time > 16 and time < 22:
   print("have a good night")
else:
   print("gooo tooo bed!!!!")
