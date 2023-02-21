lista = [3, -1, 0, 72, 8, 43, 5, -33, 89, 1001]

print("Lista original de numeros: ", lista)

contPair = 0
contOdd = 0

for i in range(len(lista)):
    num = lista[i]
    if num % 2 == 0:
        num += 1  # num = num + 1
        lista[i] = num
        contPair +=1
    else:
        num += 1
        lista[i] = num
        contOdd +=1

print("Conversion de par a impar y viceversa: ", lista)
print("Numeros pares: ", contPair)
print("Numeros impares: ", contOdd)
