# Program to display the Multiplication table

# solution 1 with for loop

# take input for table
n = int(input("enter a number here: "))

for i in range(1,11):
  print(n, "x", i, "=",n*i)


# solution 2 with while loop
  
n = int(input("enter a number here: "))
i = 1
while i <= 10:
  print(n, "x", i, "=",n*i)
  
