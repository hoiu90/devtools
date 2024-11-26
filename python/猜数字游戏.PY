import random
random_num = random.randint(1, 10)
print("猜数字游戏开始！")
crout = 0
while crout < 3:
    guess = int(input("请输入你猜的数字："))
    if guess == random_num:
        print("恭喜你，猜对了！")
        break
    elif guess < random_num:
        print("你猜的数字小了！")
        crout += 1
    else:
        print("你猜的数字大了！")
        crout += 1
else:
    print("你已经猜错三次，游戏结束！")
    
print("游戏结束！")
print("随机数是：", random_num)