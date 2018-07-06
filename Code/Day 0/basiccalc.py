#Basic Calculator program in python

num1 = int(input("enter the first number : "))
num2 = int(input("enter the second number : "))
choice=int(input("enter your choice 1 for sum,2 for subtract,3 for multiply and 4 for divide"))

if choice==1:
    add=(num1) + (num2)
    print (add,"is the addition")

elif choice==2:
        sub=(num1)-(num2)
        print(sub)

elif choice==3:
            mul=(num1)*(num2)
            print(mul)

elif choice==4:
                div=(num1)/(num2)
                print(div)

else:
                print("enter correct choice")


