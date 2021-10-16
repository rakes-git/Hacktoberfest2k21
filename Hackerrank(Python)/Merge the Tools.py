def dupdlt(substring):
    dupfree=""
    for x in substring:
        if x not in dupfree:dupfree+=x

    print(dupfree)


def merge_the_tools(string, k):
    substrings=[]
    for i in range(len(string)//k):substrings.append(string[i*k:(i+1)*k])
    for i in substrings:dupdlt(i)  
    

merge_the_tools(input(),int(input()))

    
