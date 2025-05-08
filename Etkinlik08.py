true = True
false = False

stupidWorkaround = true
testClause = true
sl = []
nl = []
al = []
print("Öğrenci Kaydı")
while stupidWorkaround:
    wa1 = true
    while wa1:
        print("Sınıfınızı girin: ",end="")
        try:
            x = input()
        except:
            print("Hatalı giriş! Tekrar dene.")
        else:
            wa1 = false
        if x != "boş":
            sl.append(x)
        else: 
            stupidWorkaround = false
            testClause = false
    if testClause:
        wa1 = true
        while wa1:
            print("Numaranızı girin: ",end="")
            try:
                x = input()
            except:
                print("Hatalı giriş! Tekrar dene.")
            else:
                wa1 = false
            nl.append(x)
        wa1 = true
        while wa1:
            print("Adınızı soyadınızı girin: ",end="")
            try:
                x = input()
            except:
                print("Hatalı giriş! Tekrar dene.")
            else:
                wa1 = false
            al.append(x)

    
data = sorted(zip(sl, nl, al))
sl, nl, al = zip(*data) if data else ([], [], [])
m="Sınıf Listesi"
print(len(m)*"-","\n",m,"\n",len(m)*"-","\n",sep="",end="")
for i in range(len(al)):
    print(nl[i]," ",sl[i]," - ",al[i],sep="")
