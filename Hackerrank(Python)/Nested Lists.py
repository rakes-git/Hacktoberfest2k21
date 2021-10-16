def takeSecond(elem):
    return elem[1]

student_count = int(input())
student_list = []

for i in range(student_count):
    temp_list = [input(),float(input())]
    student_list.append(temp_list)
student_list.sort(key=takeSecond,reverse=True)

lowest = student_list[-1][1]
while (student_list[-1][1]==lowest):
    del student_list[-1]
    student_count -=1

x=-1 
second_lowest = student_list[-1][1]
while(student_list[x][1]==second_lowest):
    print(student_list[x][0])
    x = x-1
    if -1*x > student_count:
        break




