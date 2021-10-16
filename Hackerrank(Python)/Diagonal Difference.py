count = int(input())
d1 = 0
d2 = 0
for i in range(count):
    row = ""
    row = input()
    rowl = []
    rowl = [int(n) for n in row.split()]
    d1 += rowl[i]
    d2 += rowl[count-1-i]
print(abs(d1-d2))
    