#--------BIT STUFFING ----------------

def bitStuffing(N, arr):
    # Stores the stuffed array
    brr = [0 for _ in range(30)]
    # Variables to traverse arrays
    k = 0
    i = 0
    j = 0
    # Stores the count of consecutive ones
    count = 1

    # Loop to traverse in the range [0, N)
    while (i < N):
        # If the current bit is a set bit
        if (arr[i] == 1):
            # Insert into array brr[]
            brr[j] = arr[i]
            # Loop to check for
            # next 5 bits
            k = i + 1
            while True:
                if not (k < N and arr[k] == 1 and
                        count < 5):
                    break
                j += 1
                brr[j] = arr[k]
                count += 1
                # If 5 consecutive set bits
                # are found insert a 0 bit
                if (count == 5):
                    j += 1
                    brr[j] = 0
                i = k
                k += 1
        # Otherwise insert arr[i] into
        # the array brr[]
        else:
            brr[j] = arr[i]
        i += 1
        j += 1
    # Print Answer
    for i in range(0, j):
        print(brr[i], end = "")
# Driver Code
if _name_ == "_main_":
    N = 6
    arr = [ 1, 1, 1, 1, 1, 1 ]
    bitStuffing(N, arr)