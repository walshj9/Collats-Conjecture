import sys
import datetime

num = int(sys.argv[1]) #ingerger to test from cmd line
orig = num
count = 0
highest = -1

start = datetime.datetime.now()

while num != 1:
    if num % 2 ==0:
        num /= 2
        count += 1
    else:
        num = ((3*num)+1)/2
        count += 2
    
    if num > highest:
        highest = num
    else:
        pass

end = datetime.datetime.now()
elapsed = end - start

print(f"{orig} took {count} steps to reach 1 with a max value of {highest}.\n {elapsed.microseconds} total microseconds")