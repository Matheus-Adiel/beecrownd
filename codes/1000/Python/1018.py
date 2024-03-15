initialValue = int(input())
value = initialValue
oneHundred = 0
fifty = 0
twenty = 0
ten = 0
five = 0
two = 0
one = 0

i = 0
while value >= 100:
    value -= 100
    oneHundred += 1
while value >= 50:
    value -= 50
    fifty += 1
while value >= 20:
    value -= 20
    twenty += 1
while value >= 10:
    value -= 10
    ten += 1
while value >= 5:
    value -= 5
    five += 1
while value >= 2:
    value -= 2
    two += 1
while value >= 1:
    value -= 1
    one += 1

print(initialValue)
print(f'{oneHundred} nota(s) de R$ 100,00')
print(f'{fifty} nota(s) de R$ 50,00')
print(f'{twenty} nota(s) de R$ 20,00')
print(f'{ten} nota(s) de R$ 10,00')
print(f'{five} nota(s) de R$ 5,00')
print(f'{two} nota(s) de R$ 2,00')
print(f'{one} nota(s) de R$ 1,00')
