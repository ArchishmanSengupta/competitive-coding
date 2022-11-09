import socket
from functools import lru_cache

def xor(a,b):
    result = []

    for i in range(len(b)):
        if a[i]==b[i]:
            result.append('0')
        else:
            result.append('1')
    return ''.join(result)

@lru_cache(maxsize=128)
def mod2div(divident,divisor):

    pick = len(divisor)

    tmp = divident[0:pick]

    while pick<len(divident):
        if tmp[0]=='1':
            tmp = xor(divisor,tmp)+divident[pick]
        else:
            tmp = xor('0'*pick,tmp)+divident[pick]

        pick += 1
    if tmp[0]=='1':
        tmp = xor(divisor,tmp)
    else:
        tmp = xor("0"*pick,tmp)

    checkword = tmp
    return checkword

def encodeData(data,key):
    lk =len(key)
    ad = data+'0'*(lk-1)
    remainder = mod2div(ad,key)
    codeward = data+remainder
    return codeward

s = socket.socket()

port = 12345

s.connect(('127.0.0.1',port))

input_straing = input("Enter data you want to send-> ")

data = (''.join(format(ord(x),'b') for x in input_straing))




print("Entered data in binary format : ",data)
key ='1001'

ans =encodeData(data,key)
print("Encoded data to server in binary format : ",ans)
s.sendto(ans.encode(),('127.0.0.1',12345))
print("Received feedback from server :",s.recv(1024).decode())

s.close()