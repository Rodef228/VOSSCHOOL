n = int(input())
a = int(input())
x = int(input())
b = int(input())
y = int(input())

lamps = []
covered = [False] * (n + 1)

letsPrint = True

i = 1
while i <= n:
    if covered[i]:
        i += 1
        continue

    if b > 0:
        pos = min(n, i + y)
        lamps.append((pos, y))
        b -= 1
        for j in range(max(1, pos - y), min(n + 1, pos + y + 1)):
            covered[j] = True
        i = pos + y + 1
    elif a > 0:
        pos = min(n, i + x)
        lamps.append((pos, x))
        a -= 1

        for j in range(max(1, pos - x), min(n + 1, pos + x + 1)):
            covered[j] = True
        i = pos + x + 1
    else:
        print(-1)
        letsPrint = False
        break
    
if letsPrint:
    for lamp in lamps:
        print(lamp[0], lamp[1])
