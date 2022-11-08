import socket
import socket

ip = '127.0.0.1'
port = 1234

server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
server.bind((ip,port))

server.listen(5)

while True:
    cli,add = server.accept()
    print(f"Connection Established with {add}")

    st = cli.recv(1024).decode('utf-8')
    print(st)
    cli.close()
