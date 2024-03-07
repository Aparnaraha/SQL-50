
num = int(input("enter a number to check: "))

if (num == 1):
  print("not a prime number")

if (num > 1):
  for i in range(2,num):
    if (num % i == 0):
      print("not a prime number")
    else:
      print("its a prime number")
