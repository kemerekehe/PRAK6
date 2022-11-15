kolom = int(input())
elemen = list(map(int, input().split()))
a=1
for i in range (kolom) :
    print(a * elemen[i], end =" ")
    a=a+1