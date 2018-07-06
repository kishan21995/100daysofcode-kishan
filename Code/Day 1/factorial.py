# factorial number


num=int(input('Enter a number to find factorial:'))
fact=1

while(num>0):
    fact*=num
    num-=1
    print(fact)