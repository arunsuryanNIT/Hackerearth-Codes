import math
def check_prime(num):
        for i in range (2, int(math.sqrt(num)+1)):
                if(num % i == 0):
                        return 0
        return 1
num = int(input())
for i in range (2, num + 1):
        if(check_prime(i)):
                print(i, end = " ")
