#!/bin/python3

import os
import sys

#
# Complete the summingSeries function below.
#
def summingSeries(n):
    m=10**9+7
    result=((n%m) *(n%m))%m                //you will know this if you know maths
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = summingSeries(n)

        fptr.write(str(result) + '\n')

    fptr.close()
