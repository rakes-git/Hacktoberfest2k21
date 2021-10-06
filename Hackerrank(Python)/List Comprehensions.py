x= int(input())
y= int(input())
z= int(input())
n= int(input())
list1 = []
listemp=[0,0,0]

for i in range(x+1):
    listemp[0] = i
    for j in range(y+1):
        listemp[1] = j
        for k in range(z+1):
            listemp[2] = k
            list1.append(listemp[:])
         
list1 = [x for x in list1 if sum(x) != n]
print(list1)
