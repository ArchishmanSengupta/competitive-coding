import sys
 
def isValid(a, b, candidate):
    for a_ele in a:
        if candidate % a_ele != 0:
            return False
    for b_ele in b:
        if b_ele % candidate != 0:
            return False
    return True
 
n,m = raw_input().strip().split(' ')
n,m = [int(n),int(m)]
a = map(int,raw_input().strip().split(' '))
b = map(int,raw_input().strip().split(' '))
 
cnt = 0
for candidate in xrange(max(a), min(b)+1):
    if isValid(a, b, candidate):
        cnt += 1
 
print cnt
