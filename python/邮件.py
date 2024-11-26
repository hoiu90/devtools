email = input("请输入您的邮箱：")
username = email[:email.index('@')]
domain = email[email.index('@')+1:]
res = "您的用户名为："+username+"，域名为："+domain
print(res)