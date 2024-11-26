import random
option = ["石头", "剪刀", "布"]
tiu = 0
scort_input_num = 0
scort_num = 0
while tiu<=5:
    num = random.choice(option)
    input_num = input("请输入石头、剪刀、布：") 
    if input_num == num:
        print("平局")
        print("当前比分不变")
        tiu += 1
    elif input_num == "石头" and num == "剪刀":
        print("你赢了")
        print("当前你的比分+1")
        scort_input_num += 1
        tiu += 1
    elif input_num == "石头" and num == "布":
        print("你输了")
        print("当前机器的比分+1")
        scort_num += 1
        tiu += 1
    elif input_num == "剪刀" and num == "石头":
        print("你输了")
        print("当前机器的比分+1")
        scort_num += 1
        tiu += 1
    elif input_num == "剪刀" and num == "布":
        print("你赢了")
        print("当前你的比分+1")
        scort_input_num += 1
        tiu += 1
    elif input_num == "布" and num == "石头":
        print("你赢了")
        print("当前你的比分+1")
        scort_input_num += 1
        tiu += 1
    elif input_num == "布" and num == "剪刀":
        print("你输了")
        print("当前机器的比分+1")
        scort_num += 1
        tiu += 1
    else:
        print("输入错误")
        break
print("游戏结束")
print("你的比分为：", scort_input_num)
print("机器的比分为：", scort_num)
if scort_input_num > scort_num:
    print("你赢了")
elif scort_input_num < scort_num:
    print("你输了")
else:
    print("平局")