m = int(input())
n = int(input())
k = int(input())

if n == 1:
    print(m-k+1)
elif m == 1:
    print(n-k+1)
else:
    if n <= k:
        print(n * (m - 1))
    elif m <= k:
        print(m * (n - 1))
    else:
        summ = 0
        while k < summ:
            if n > m:
                summ += n
                m -= 1
            else:
                summ += m
                n -= 1
        