import socket
table = {
    '192.168.0.1':'1E.4A.4A.11',
    '192.168.0.2':'5E.6A.4A.11',
    '192.168.0.3':'1E.6A.4A.11',
    '192.168.0.4':'2E.4A.3A.11',
    '192.168.0.5':'3E.4A.2A.11',
    '1E.4A.4A.11':'192.168.0.1',
    '5E.4A.4A.11':'192.168.0.2',
    '1E.6A.4A.11':'192.168.0.3',
    '2E.4A.3A.11':'192.168.0.4',
    '3E.4A.2A.11':'192.168.0.5',
}

s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.bind(('',1234))
s.listen()
cls,addr = s.accept()
print(f"connection from {addr} has Esatablished")
ip = cls.recv(1024)
ip = ip.decode("utf-8")
mac = table.get(ip,'No entry for given address')
cls.send(mac.encode())