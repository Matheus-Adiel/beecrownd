linha = input().split()
a, b, c = linha
a = float(a)
b = float(b)
c = float(c)
pi = 3.14159

triangleArea = (a * c)/2
circleArea = pi * c ** 2
trapezoidArea = ((a + b)/2) * c
squareArea = b ** 2
rectangleArea = a * b

print(f'TRIANGULO: {triangleArea:.3f}')
print(f'CIRCULO: {circleArea:.3f}')
print(f'TRAPEZIO: {trapezoidArea:.3f}')
print(f'QUADRADO: {squareArea:.3f}')
print(f'RETANGULO: {rectangleArea:.3f}')
