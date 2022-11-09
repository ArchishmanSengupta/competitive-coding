#----------SERVER FTP USING TCP IP----------------
#-------------KINDLY CHECK THE INDENTATION OF THE CODE YOURSELF----------------
import tqdm
import os
BUFFER_SIZE = 1024
s = socket.socket()
s.bind(('127.0.0.1', 5001))
s.listen(1)
print("Listening as 127.0.0.1:5001")
client_socket, address = s.accept()
print(f"Connected to {address[0]}:{str(address[1])}")
filename, filesize = 
client_socket.recv(BUFFER_SIZE).decode().split('||')
filename = os.path.basename(filename)
filesize = int(filesize)
progress = tqdm.tqdm(range(filesize), f"Receiving 
{filename}", unit="B", unit_scale=True, 
unit_divisor=1024)
with open(filename, "wb") as f:
 while True:
 bytes_read = client_socket.recv(BUFFER_SIZE)
 if not bytes_read:
 break
 f.write(bytes_read)
 progress.update(len(bytes_read))
client_socket.close()
s.close()