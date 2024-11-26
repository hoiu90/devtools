my_list=[21,25,21,23,22,20]

my_list.append(99)
my_list.extend([24,26,27,28,29])
my_list.insert(2,19)
my_list.remove(21)
my_list.pop(3)


# my_list=[i for i in my_list if i%2==0]

#print(my_list)
index=0
while index<len(my_list):
    if my_list[index]%2==0:
        my_list.pop(index)
    else:
        index+=1
print(my_list)