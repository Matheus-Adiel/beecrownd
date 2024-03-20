line = input().split()

a, b, c = line

a = float(a)
b = float(b)
c = float(c)

delta = b ** 2 - 4 * a * c

if delta >= 0 and a != 0:
    x1 = (-b + delta ** (1/2))/(2 * a)
    x2 = (-b - delta ** (1/2))/(2 * a)

    print(f'R1 = {x1:.5f}')
    print(f'R2 = {x2:.5f}')
else:
    print(f'Impossivel calcular')
