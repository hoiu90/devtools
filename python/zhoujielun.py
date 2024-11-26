zhoujielun_list =("周杰伦",11, ["football", "music", ]) 
index = 0 
while index < len(zhoujielun_list): 
    print(zhoujielun_list[index]) 
    index += 1
index =zhoujielun_list.index("周杰伦")
print(index)

num = len(zhoujielun_list)
print(num)

del zhoujielun_list(1)
print(zhoujielun_list)