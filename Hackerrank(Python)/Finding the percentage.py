student_count = int(input())
student_dictionary = {}

for i in range(student_count):
    loop_list = input().split(' ',1)
    student_dictionary[loop_list[0]] = round(sum([float(n) for n in loop_list[1].split()])/3,2)
    
query = input()
print('%.2f'%student_dictionary[query])    
    