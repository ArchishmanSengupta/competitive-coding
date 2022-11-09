import socket

ip = '127.0.0.1'
port = 1234

cli = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
cli.connect((ip,port))

str = input("Enter")
st = bytes(str,'utf-8')
cli.send(st)
