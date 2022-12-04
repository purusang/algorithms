from datetime import datetime
def fib(n):
    if n == 0:
        return 0
    if n == 1: 
        return 1
    return fib(n-1) + fib(n-2)

while(1):
    n = int(input("Enter number: "))
    t1 = datetime.now()
    print(n,"th fibonacci number is: ", fib(n))
    t2 = datetime.now()
    print("Time taken is : ", t2-t1, "seconds")
