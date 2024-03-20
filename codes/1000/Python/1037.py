value = float(input())

if value >= 0 and value <= 25:
    msg = 'Intervalo [0,25]'
elif value > 25 and value <= 50:
    msg = 'Intervalo (25,50]'
elif value > 50 and value <= 75:
    msg = 'Intervalo (50,75]'
elif value > 74 and value <= 100:
    msg = 'Intervalo (75,100]'
else:
    msg = 'Fora de intervalo'

print(msg)
