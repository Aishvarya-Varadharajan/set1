str=input()
l=[]
s2=''
index = 0
for index in str:
  if index not in l:
    l.append(index)
s2=''.join(l)
print(s2)
