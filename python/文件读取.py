f_r=open('/Users/liujiu/Documents/nihao.txt', 'r')
f_w=open('/Users/liujiu/Documents/nihao.txt.bak', 'w')
for line in f_r:
    line=line.strip()
    if line.split(",")[4]=="测试":
        continue
    f_w.write(line)
    f_w.write("\n")
f_r.close()
f_w.close()