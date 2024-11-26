import random
password =int(input("请输入密码长度："))
s = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+{}[]|\:;'<>,.?/"
password = ''.join(random.sample(s,password))
print("随机密码：",password)