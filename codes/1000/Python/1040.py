line = input().split()

n1, n2, n3, n4 = line

n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

media = (n1*2 + n2*3 + n3*4 + n4*1)/10
print(f'Media: {media:.1f}')

if media >= 7:
    msg = 'Aluno aprovado.'
elif media >= 5:
    msg = 'Aluno em exame.'
else:
    msg = 'Aluno reprovado.'
    
print(msg)

if msg == 'Aluno em exame.':
    n5 = float(input())
    print(f'Nota do exame: {n5}')
    
    media = (media + n5)/2

    if media >= 5:
        msg = 'Aluno aprovado.'
    else:
        msg = 'Aluno reprovado.'

    print(msg)
    print(f'Media final: {media:.1f}')