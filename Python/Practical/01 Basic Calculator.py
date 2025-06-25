a = int(input("Enter the first number -> "))
b = int(input("Enter the second number -> "))
op = str(input("Enter the Operator (+,-,*,/,%,//,**) -> "))

if op == '+':
    print("Addition:",a+b)
elif op == '-':
    print("Subtraction:",a-b)
elif op == '*':
    print("Multiplication:",a*b)
elif op == '/':
    print("Division:",a/b)
elif op == '%':
    print("Modulus:",a%b)
elif op == '//':
    print("Floor Division:",a//b)
else:
    print(f'{a} raised to the power {b}: {a**b}')



# 7 Operators

# + -> addition
# - -> subtraction
# * -> multiplication
# / -> division
# % -> Modulus
# // -> Division Floor
# ** -> raised to the power


