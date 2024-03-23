line = input().split()

code, amount = line

code = int(code)
amount = int(amount)

if code == 1:
    price = 4
elif code == 2:
    price = 4.5
elif code == 3:
    price = 5
elif code == 4:
    price = 2
else:
    price = 1.5

priceTotal = amount * price

print(f'Total: R$ {priceTotal:.2f}')
