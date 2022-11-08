#------Character Count Sender------

n=int(input("Enter the no. of frames"))

l=[]
l2=[]
for i in range(0,n):
  x=input()
  l.append(x)
  l2.append(len(x)+1)


sender=''
for i in range(0,n):
    sender+= str(l2[i])+l[i]
print(sender)