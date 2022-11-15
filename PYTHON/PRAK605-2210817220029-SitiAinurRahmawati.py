ordo = int(input())
matriksA = []
print ("Matriks A")
for a in range (ordo) :
    elemen = list(map(int, input().split()))
    matriksA.append(elemen)
matriksB = []
print ("Matriks B")
for a in range (ordo) :
    elemen = list(map(int, input().split()))
    matriksB.append(elemen)
print("Matriks AXB")
hasil = []
for a in range (ordo) :
    hasil.append([])
    for b in range (ordo) :
        jumlah = 0
        for c in range (ordo) :
            jumlah = jumlah + matriksA [a][c] * matriksB [c][b]
        hasil[a].append(jumlah)
for baris in hasil:
    for elemen in baris:
        print(elemen, end=" ")
    print()