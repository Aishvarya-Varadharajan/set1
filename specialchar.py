str=input()
index = 0
count = 0
for index in str:
  if not(index.isdigit() or index.isalpha() or index == (' ')):
    count=count+1
print(count)
