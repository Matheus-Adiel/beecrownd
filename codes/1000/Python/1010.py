product1 = input().split()
product2 = input().split()

code1, amount1, price1 = product1
code2, amount2, price2 = product2

totalPrice = float(price1) * int(amount1) + float(price2) * int(amount2)

print(f'VALOR A PAGAR: R$ {totalPrice:.2f}')
