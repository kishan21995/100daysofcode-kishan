def bublesort(arr):
    n=len(arr)
    for i in range(n):
        for j in range (0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                arr=[10,30,50,70,90,110,130]
                bublesort(arr)

                print("sorted array is :")
                for i in range (len(arr)):
                    print("%d"%arr[i]),