n = 0
soma = 0

while n > 0 and n < 100:
	n = int(input("Enter "))
	soma += n
	if soma >= 100:
		exit

print(soma)
