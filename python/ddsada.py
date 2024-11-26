def hesuan_cheak():
    print("you are fine")

print("欢迎来到黑马程序员！请出示您的健康码！")
degree =float(input("请输入您的体温"))

if degree >=37:
    print("请及时就医")
else:
    hesuan_cheak()