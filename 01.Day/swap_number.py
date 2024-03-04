# solution using third variable

x = 3

y = 4

print("before swapping x",x,"& y",y)

temp = x

x = y

y = temp

print("after swapping x",x,"& y",y)

# solution without using third variable

x = 12

y = 23

print("before swapping x",x,"& y",y)

x , y = y , x

print("after swapping x",x,"& y",y)

