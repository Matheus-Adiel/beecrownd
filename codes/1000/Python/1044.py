line = input().split()
a, b = line
a = int(a)
b = int(b)

if b % a == 0 and b >= a:
    print('Sao Multiplos')
elif a % b == 0 and a >= b:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
