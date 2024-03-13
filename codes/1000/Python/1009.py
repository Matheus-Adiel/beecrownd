name = input()
salary = float(input())
sales = float(input())

bonus = sales * 0.15
totalSalary = salary + bonus

print(f'TOTAL = R$ {totalSalary:.2f}')
