line = input().split()
x = float(line[0])
y = float(line[1])

if x == 0 and y == 0:
    msg = 'Origem'
elif x == 0 and y != 0:
    msg = 'Eixo Y'
elif x != 0 and y == 0:
    msg = 'Eixo X'
elif x > 0 and y > 0:
    msg = 'Q1'
elif x < 0 and y > 0:
    msg = 'Q2'
elif x < 0 and y < 0:
    msg = 'Q3'
else:
    msg = 'Q5'

print(msg)
