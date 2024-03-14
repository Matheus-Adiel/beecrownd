line = input().split()
a, b, c = line
a = int(a)
b = int(b)
c = int(c)

higherAB = (a + b + abs(a - b))/2
higherABC = (higherAB + c + abs(higherAB - c))/2

print(f'{higherABC:.0f} eh o maior')
