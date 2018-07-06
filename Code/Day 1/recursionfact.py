# recursion factorial

num=int(input('Enter a num to calculate factorial:'))

def fact(a):
    if(a>0):

        return(a*fact(a-1))
        else:
         return 1
            print(fact(num))