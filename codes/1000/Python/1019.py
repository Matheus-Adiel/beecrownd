seconds = int(input())
minutes = 0
hours = 0

while seconds >= 60:
    minutes += 1
    seconds -= 60

while minutes >= 60:
    hours += 1
    minutes -= 60

print(f'{hours}:{minutes}:{seconds}')
