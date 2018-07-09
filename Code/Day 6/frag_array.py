def pushZeroes(arr):
    c=0
    for i in range(len(arr)):
        if arr[i]!=0:
            arr[c]=arr[i]
            c+=1


            while c<len(arr):
                arr[c]=0
                c+=1
                print(arr)

                ar=[10,12,0,0,7,19,7,0,45,5]
                pushZeroes(arr)