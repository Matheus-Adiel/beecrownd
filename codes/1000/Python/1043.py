line = input().split()
a, b, c = line
A = float(a)
B = float(b)
C = float(c)

if A < B + C and B < A + C and C < A + B:
    per = A + B + C
    print(f'Perimetro = {per:.1f}')
    
else:
    areaTrapezio = ((A + B)/2) * C
    print(f'Area = {areaTrapezio:.1f}')
