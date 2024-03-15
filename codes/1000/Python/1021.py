value = float(input())

banknotesValues = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00]
banknotes = [0, 0, 0, 0, 0, 0]

coinsValues = [100, 50, 25, 10, 5, 1]
coins = [0, 0, 0, 0, 0, 0]

for i in range(len(banknotesValues)):
    while value >= banknotesValues[i]:
        banknotes[i] += 1
        value -= banknotesValues[i]

value = round(value * 100)

for i in range(len(coinsValues)):
    while value >= coinsValues[i]:
        coins[i] += 1
        value -= coinsValues[i]

print('NOTAS:')
for i in range(len(banknotesValues)):
    print(f'{banknotes[i]} nota(s) de R$ {banknotesValues[i]:.2f}')

print('MOEDAS:')
for i in range(len(coinsValues)):
    print(f'{coins[i]} moeda(s) de R$ {coinsValues[i]/100:.2f}')
