y = int(input())

if (( y%400 == 0)or (( y%4 == 0 ) and ( y%100 != 0))):
    print("%d yes" %y)
else:
    print("%d no" %y)
