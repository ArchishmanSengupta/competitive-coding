#-------------KINDLY CHECK THE INDENTATION OF THE CODE YOURSELF----------------
import socket
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect(('localhost',1234))
a = input("ARP or RARP")
if (a=="ARP"):
    add = input("Enter IP: ")
elif (a=='RARP'):
    add = input("enter MAC: ")

s.send(add.encode())
mac = s.recv(1024)
mac = mac.decode('utf-8')
if (a=='ARP'):
    print(f"MAC of {add} is : {mac}")
elif (a=='RARP'):
    print(f"IP of {add} is : {mac}")
