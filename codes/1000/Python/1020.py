days = int(input())
months = 0
years = 0

while days >= 365:
    years += 1
    days -= 365

while days >= 30:
    months += 1
    days -= 30

print(f'{years} ano(s)\n{months} mes(es)\n{days} dia(s)')
