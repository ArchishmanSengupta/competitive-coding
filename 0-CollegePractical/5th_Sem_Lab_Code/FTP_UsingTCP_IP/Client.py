#---------CLIENT FTP USING TCP IP----------------

#-------------KINDLY CHECK THE INDENTATION OF THE CODE YOURSELF----------------

import socket
import tqdm
import os
BUFFER_SIZE = 1024
filename = input("Enter the file path or filename: ")
filesize = os.path.getsize(filename)
s = socket.socket()
print("Connecting to 127.0.0.1:5001")
s.connect(("127.0.0.1", 5001))
print("Connected.")
s.send(f"{filename}||{filesize}".encode())

progress = tqdm.tqdm(range(filesize), f"Sending {filename}", unit="B", unit_scale=True, unit_divisor=1024)
with open(filename, "rb") as f:
while True:
 bytes_read = f.read(BUFFER_SIZE)
 if not bytes_read:
 break
 s.sendall(bytes_read)
 progress.update(len(bytes_read))
s.close()