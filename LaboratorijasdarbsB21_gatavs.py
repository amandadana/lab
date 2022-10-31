# LaboratorijasdarbsB21
#*************************************************************************
#Amanda Dana Stugle, as20256.
#B21:
#Doti divi naturāli skaitļi m un n.
#Izdrukāt visus pirmskaitļus, kas atrodas intervālā [m,n].
#Risinājumā izmantot funkciju, kas atpazīst pirmskaitli.
#Programma izveidota: 31.10.2022.
#*************************************************************************
def is_prime(n):
    is_prime_num = True
    
    if n == 0 or n ==1:
        return False
    
    i = 2
    while i <= n / 2:
        if n % i == 0:
            is_prime_num = False
            break
        i += 1
        
    return is_prime_num

def main():
    n = int(input("Ievadiet pirmo naturālo skaitli (intervāla sākumpunktu), N >= 1:"))
    while n < 0:
        n = int(input("Nekorekta vērtība / (-as), mēģiniet vēlreiz!"))
        
    m = int(input("Ievadiet otro naturālo skaitli (intervāla beigu punktu), N >= 1 :"))
    while m <= n:
        m = int(input("Nekorekta vērtība / (-as), mēģiniet vēlreiz, M > N:"))
        
    primes = []
    
    while n <= m:
        if is_prime(n):
            primes.append(n)
            
        n +=1
        
    if len(primes) == 0:
        print ("Intervālā nav pirmskaitļu!")
        return
        
    prime_str = "Pirmskaitļi:"
    
    for prime in primes:
        prime_str = f"{prime_str} {prime} "
        
    print(prime_str)
    
ok = "1"

while ok == "1":
    main()
    print ("Vai turpināt (1) vai beigt (0) ?")
    ok = input("")
    
#*************Testu plāns******************************************************
#         m                n                         Izvade
#      0                9                       2  3  5  7
#      1                2                           2
#      2                3                          2  3
#     -1                9           Nekorekta vērtība, mēģiniet vēlreiz!
#      8               -1           Nekorekta vērtība, mēģiniet vēlreiz!
#     -1               -4           Nekorekta vērtība, mēģiniet vēlreiz!
#      9                0           Nekorekta vērtība, mēģiniet vēlreiz, N > M:
#      2               17                  2  3  5  7  11  13   17
#******************************************************************************