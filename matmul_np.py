import numpy as np
import sys
import timeit

size = int(sys.argv[1])
print("size : ",size)
M = np.random.rand(size, size)
N = np.random.rand(size, size)

time = timeit.timeit(lambda: M@N, number=10000)

print(f"{time} seconds elapsed")

