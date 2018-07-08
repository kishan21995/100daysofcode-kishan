
def unique(s):
    uniq_c=set()
    for c in s:
        if c in uniq_c:
            return False
            uniq_c.add(c)
            return True

            st="garbzhiyfexaax"

            if unique(st):
                print("String is unique")
       else:print("String is not unique")