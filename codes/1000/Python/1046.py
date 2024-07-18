line = input().split()
for i in range(len(line)):
    line[i] = int(line[i])
start, end = line

if start > end:
    end += 24
elif start == end:
    duration = 24
    
if start > end or start < end:
    duration = end - start
    
print(f'O JOGO DUROU {duration} HORA(S)')
