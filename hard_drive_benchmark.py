import time 

start_time = time.time()

#writing first
with open('large_file_hard_drive.txt','wb') as fp:
    bytes_write= 100
    while bytes_write < 10**9:
        parts = b'0' * 100
        fp.write(parts[:min(10**9-bytes_write,100)])
        bytes_write += len(parts)

with open('large_file_hard_drive.txt','rb') as fp:
    bytes_read = 100
    while bytes_read < 10**9:
        parts = fp.read(100)
        bytes_read += len(parts)

end_time = time.time()
total_time_taken = end_time -start_time 

print('Total time taken is ', total_time_taken)