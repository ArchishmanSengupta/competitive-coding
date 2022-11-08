import socket

host = "127.0.0.1"
port = 4455
addr = (host,port)

client = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

while True:
    date = input("enter a sentence in lower")
    data = date.encode("utf-8")
    client.sendto(data,addr)

    data,addr = client.recvfrom(1024)
    data = data.decode("utf-8")
    print(f"server has send {data}")
