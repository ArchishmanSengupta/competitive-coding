import socket
from functools import lru_cache


def BinaryToDecimal(binary):
    string = int(binary, 2)

    return string


# Driver's code
# initializing binary data
# bin_data = '10001111100101110010111010111110011'

# print binary data
# print("The binary value is:", bin_data)

def to_str(bin_da):
    str_data = ' '

    for i in range(0, len(bin_da), 7):
        temp_data = bin_da[i:i + 7]
        decimal_data = BinaryToDecimal(temp_data)
        str_data = str_data + chr(decimal_data)
    print("The Binary value after string conversion is:",str_data)
    return str_data


def xor(a,b):
    result = []
    # start=time.time()
    for i in range(1,len(b)):
        if a[i] == b[i]:
            result.append('0')
        else:
            result.append(('1'))
    # end =time.time()
    # print(end-start)
    return ''.join(result)

@lru_cache(maxsize=128)
def mod2div(divident,divisor):
    pick = len(divisor)
    tmp = divident[0: pick]

    while pick < len(divident):
        if tmp[0] == '1':
            tmp = xor(divisor,tmp)+divident[pick]
        else:
            tmp = xor('0'*pick,tmp)+divident[pick]

        pick += 1
    if tmp[0] =='1':
        tmp =xor(divisor,tmp)
    else:
        tmp = xor('0'*pick,tmp)

    checkword = tmp
    return checkword


def decodeData(data,key):
    l_key = len(key)
    ad = data.decode()+'0'*(l_key-1)
    remainder = mod2div(ad,key)
    return remainder

s = socket.socket()
print("socket created successfully")
port = 12345

s.bind(('',port))
print(f"socket binded to {port}")

s.listen(5)
print("socket is listening")


while True:
    c,addr = s.accept()
    print('Sot connection from',addr)

    data = c.recv(1024)
    print("REceived encoded data in byte format :",data.decode())
    print("docoding string",to_str(data.decode()[0]))



    if not data:
        break

    key = '1001'
    ans = decodeData(data,key)
    print("Remainder after decoding is->"+ans)

    temp = "0"*(len(key)-1)
    if ans == temp:
        c.sendto(("Thank  you for data ->"+data.decode()+" Received no error Found").encode(),('127.0.0.1',12345))
    else:
        c.sendto(("Error in data").encode(),('127.0.0.1',12345))
    c.close()