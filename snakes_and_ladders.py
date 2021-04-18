import random

player=[0,0]
i=0
print("welcome!")
print("100 99 98 97 96 95 94 93 92 91")
print("81 82 83 84 85 86 87 88 89 90")
print("80 79 78 77 76 75 74 73 72 71")
print("61 62 63 64 65 66 67 68 69 70")
print("60 59 58 57 56 55 54 53 52 51")
print("41 42 43 44 45 46 47 48 49 50")
print("40 39 38 37 36 35 34 33 32 31")
print("21 22 23 24 25 26 27 28 29 30")
print("20 19 18 17 16 15 14 13 12 11")
print("01 02 03 04 05 06 07 08 09 10")


print("lets begin")
print("positions 4,17,35,44,52,78, are ladders")
print("positions 23,46,63,97 are snakes ")

while(player[0]<100 and player[1]<100):
    print("player",i+1," turn")
    player[i]=player[i]+random.randint(1,6)
    if(player[i]==4 or player[i]==17 or player[i]==35 or player[i]==52 or player[i]==78 or player[i]==44 ):
        print("you got a ladder !!")
        if(player[i]==4):
             player[i]=16
        if(player[i]==17):
             player[i]=36
        if(player[i]==35):
             player[i]=56
        if(player[i]==44):
             player[i]=65
        if(player[i]==52):
             player[i]=75
        if(player[i]==78):
             player[i]=92
        
    if(player[i]==23 or player[i]==46 or player[i]==63 or player[i]==97  ):
        print("OOPS! you got a snake !!")
        if(player[i]==23):
             player[i]=6
        if(player[i]==46):
             player[i]=38
        if(player[i]==63):
             player[i]=55
        if(player[i]==97):
            player[i]=82

    print("position of player",i+1,"is",player[i])
    print("\n")
    i=(i+1)%2

if(player[0]==100):
    print("player 1 wins")
if(player[1]==100):
    print("player 2 wins")






