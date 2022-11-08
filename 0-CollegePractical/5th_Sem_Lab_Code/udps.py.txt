import socket

host = "127.0.0.1"
port = 4455

server = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
server.bind((host,port))

while True:
    data,addr = server.recvfrom(1024)
    data= data.decode("utf-8")
    print(f"client: {data}")

    data = data.upper()
    data = data.encode("utf-8")
    server.sendto(data,addr)