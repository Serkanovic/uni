import numpy as np

A = np.array([(-1,1)])
B = np.array([(2,-1,-4),(3,4,-3)])

print(A.shape)
print(B.shape)

if A.shape[1] == B.shape[0]:
    print("É possível multiplicar")
    C = A @ B
    print(f"Pelo operador \"@\": {C}")
else:
    print("Não é possível multiplicar")


#numpy
C2 = np.zeros((1,3), dtype=int)
C2 = np.dot(A,B,C2)
print(f"Pelo numpy: {C2}")