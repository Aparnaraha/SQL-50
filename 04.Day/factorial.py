# Program to find the factorial of a number

# solution 1 using a loop

num = int(input("enter a number here: "))

fact = 1

if num < 0 :
  print("factorial of 0 doesnot exist ")

if num == 0:
  print("factorial of 0 is ",1)

if num > 0:
  for i in range(1, num+1):
    fact = fact * i
print("the factorial of the given number is ",fact)  