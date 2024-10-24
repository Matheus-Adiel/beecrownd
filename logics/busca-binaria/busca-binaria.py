def busca_binaria(lista, e):
    inicio = 0;
    fim = len(lista) - 1
    while inicio <= fim:
        meio = (inicio + fim)//2
        palpite = lista[meio]
        if palpite == e:
            return meio
        if palpite > e:
            fim = meio - 1
        else:
            inicio = meio + 1
    return None
