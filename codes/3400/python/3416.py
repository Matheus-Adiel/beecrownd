import math

line = input().split()
n = int(line[0])
l = int(line[1])
d = float(line[2])/1000
qty_required = d*n
m = qty_required/l
qty_produced = math.ceil(m)*l
print(qty_produced)
