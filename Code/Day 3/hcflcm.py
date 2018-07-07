
a=[]
for i in range(1,5):
    a.append(int(input()))

    def hcf(a,b):
        for i in range(1,max(a,b)+1):
            if(a%i==0 and b%i==0):
                gcd=i
                return gcd
                def lcm(a,b):
                    gcd=hcf(a,b)
                    lcms =(a*b)/gcd
                    return int(lcms)
                    hcfs =lcms (hcfs,a[i])
                    print('HCF:'+str(hcfs))
                       print('LCM:'+str(lcms))