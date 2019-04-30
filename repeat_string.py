str=input()
l=[]
s2=''
index = 0
for index in str:
  if index not in l:
    l.append(l)
s2=''.join(l)
print(s2)
