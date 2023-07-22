import random
listem = []
pcount = int(input("Enter number of players: "))
c = 1
tsize = int (input("Enter team sizes: "))
numb = str(c)
with open ("Roster.txt","r") as file:
    for x in range (pcount):
        player = file.readline()
        listem.append(player)
file.close()

with open ("Teams.txt","w") as file:
    while len(listem)> 0:

        file.write("Team " + numb + " is: \n")
        for x in range (tsize):
            item = str(random.choice(listem))
            file.write(item)
            listem.remove(item)
        c = c+1
        numb = str(c)
        file.write("----------\n")
file.close()
with open ("Teams.txt","r") as file:
    result = file.read()
    print(result)
file.close
        
