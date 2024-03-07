
num1 = int(input("enter first number: "))

num2 = int(input("enter second number: "))

num3 = int(input("enter third number: "))

if (num1 > num2) and (num1 > num3):
  print("num1 is largest",num1)

elif (num2 > num1) and (num2 > num3):
  print("num2 is largest",num2)

else:
  print("num3 is largest",num3)


