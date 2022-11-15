kolom1, kolom2 = map(int, input().split())
if kolom1 != kolom2 :
    print("Jumlah tidak sama")
else :
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    hasil = []
    for i in range (kolom1) :
        hasil.append(baris1[i]*baris2[i])
    for elemen in hasil :
        print(elemen, end=" ")