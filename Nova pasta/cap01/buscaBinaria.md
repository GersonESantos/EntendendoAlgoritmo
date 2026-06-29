
código completo:
def pesquisa_binaria(lista, item):
baixo = 0 ❶
alto = len(lista) - 1 ❶
[[while]] baixo <= alto: ❷
meio = (baixo + alto) / 2 ❸
chute = lista[meio]
if chute == item: ❹
return meio
if chute > item: ❺
alto = meio - 1
else: ❻
baixo = meio + 1
returno None ❼
minha lista = [1, 3, 5, 7, 9] ❽
print pesquisa binaria(minha lista, 3) # => 1 ❾
print pesquisa binaria(minha lista, -1) # => None ❿
❶ baixo e alto acompanham a parte da lista que você está procurando.
❷ Enquanto ainda não conseguiu chegar a um único elemento...
❸ … verifica o elemento central
❹ Acha o item.
❺ O chute foi muito alto.
❻ O chute foi muito baixo.
❼ O item não existe.
❽ Vamos testá-lo!
❾ Lembre-se, as listas começam no 0. O próximo endereço tem índice 1.
❿ “None” significa nulo em Python. Ele indica que o item não foi encontrado