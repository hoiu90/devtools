print("欢迎来到动物园")

import random
num1 = random.randint(1, 10)

while True:
    num = int(input("请输入您的年龄："))

    if num > num1:
        print("您猜错了，太大了")
    elif num < num1:
        print("您猜错了，太小了")
    else:
        print("恭喜您，猜对了！")
        break
