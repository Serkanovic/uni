num = abs(int(input("Insira: ")))
base2 = list()
base2.insert(0,int(num % 2))
while num > 2:
    num = num/2
    base2.insert(0,int(num % 2))
    
print(base2)