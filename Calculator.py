#This is a simple calculator
def add(a,b):
    return a+b

def substract(a,b):
    return a-b

def multiply(a,b):
    return a*b

def divide(a,b):
    return a/b

def remainder(a,b):
    return a%b

print('Welcome to Calculator World')
print("Select the operation")
print("1.Add")
print('2.Substract')
print("3.Multiply")
print("4.Divide")
print("5.Remainder")
choice= input()
if choice!=1 and choice!=2 and choice!=3 and choice!=4 and choice!=5:
    print("Invalid operation")
    exit()
num1=input('Enter first number ')
num2=input('Enter second number ')
if(choice==1):
    print("The result of addition is ",add(num1,num2))
elif(choice==2):
    print("The result of substraction is",substract(num1,num2))
elif(choice==3):
    print("The result of multiplication is",multiply(num1,num2))
elif(choice==4):
    print('The result of division is',divide(num1,num2))
elif(choice==5):
    print('The remainder is ',remainder(num1,num2))
