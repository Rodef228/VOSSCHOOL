a = int(input())
b = int(input())
c = int(input())

d = int(input())

summ = a + b + c

maxx = max(a, b, c)

if abs((summ - maxx) - maxx) < d:
    print(0)
else:
    if summ - maxx > maxx:
        print(summ - maxx - maxx - d)
    else:
        print(maxx - (summ - maxx) - d)