import time

start_time = time.time()

# for addition 
addition_val = 0
for i in range(10**10):
    addition_val += i
print("Addition", addition_val)

#for multiplictaion 
multiplication_val = 1
for i in range(5*10**9):
    multiplication_val *= i 
print("Multiplication", multiplication_val)

#for division
division_val = 1
for i in range(1,2*10**9):
    division_val /= i
print("Division", division_val)

end_time = time.time()
total_time_taken = end_time-start_time

print('total time taken to execute  ',total_time_taken)