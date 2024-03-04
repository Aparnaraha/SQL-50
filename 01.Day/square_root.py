#  solution 1 using exponentiation

num1 = int(input("enter a number : "))

square_root = num1**(1/2) # ** is exponentiation operator

print("square_root of the number is  : ", square_root)

#  solution 2 using math module

import math

num = int(input("enter a number : "))

square_root = math.sqrt(num)

print("square_root of the number is  : ", square_root)