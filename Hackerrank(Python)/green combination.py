from itertools import combinations
x=0
for i in range(1,6):

    comb = [x for x in combinations(['g','r','e','e','n'],i)]
    
    for j in range(len(comb)):

            print(''.join(comb[j]))
            x+=1
print(x)            