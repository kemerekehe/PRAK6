baris, kolom = map(int, input().split())
matrix = []
a=0
elemen = list(map(int, input().split()))
for i in range (baris) :
    matrix.append(elemen[a:a+kolom])
    a=a+kolom
for baris in matrix:
    for elemen in baris:
        print(elemen, end=" ")
    print()