def busca_menor (arr):
    menor = arr[0]
    menorIndice = 0
    for i in range(1, len(arr)):
        if arr[i] < menor:
            menor = arr[i]
            menorIndice = i
    return menorIndice

def ordenacao_por_selecao(arr):
    novoArr = []
    for i in range(len(arr)):
        menor = busca_menor(arr)
        novoArr.append(arr.pop(menor))
    return novoArr 
