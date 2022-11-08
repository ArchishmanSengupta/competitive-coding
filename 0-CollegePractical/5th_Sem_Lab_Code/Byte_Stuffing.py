# ----------BYTE STUFFING------------

list1=[]
flag='@'
esc='/'
a=input('Enter your message=')
list1.append(flag)
len1=len(a)
for i in a:
 if i=='@':
  list1.append(esc)
  list1.append(i)
 else:
  list1.append(i)
list1.append(flag)
print ('At senders side=',list1)
len1=len(a)
list2=[]
del list1[0],list1[len(list1)-1]
for i in range(0,len1,1):
 if a[i]=='#':
  list1.remove('#')
 else:
  list2.append(a[i])
print ('At recievers side=',list2)