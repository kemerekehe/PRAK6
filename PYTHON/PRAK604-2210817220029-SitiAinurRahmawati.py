kunci=list(input())
pesan=list(input())
salah=0
benar=0
if len(kunci) != len(pesan) :
    print("Panjang kalimat berbeda, pesan palsu")
else :
    for i in range (len(kunci)) :
        if kunci[i] == pesan[i] :
            print("*", end = "")
            benar=benar+1
        else :
            print("#", end = "")
            salah=salah+1
    print()
    print("* = ", benar)
    print("# = ", salah)
    if benar >= salah :
        print("Pesan Asli")
    elif benar < salah :
        print("Pesan Palsu")
