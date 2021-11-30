
def solve():
    n=int(input())
    s=list(input())
   
    count=int(s.count('?'))

    while(count>0):

        for i in range(n):
            redcount=0
            bluecount=0
            if(i-1>=0):
                if(s[i-1]=='R'):
                    redcount+=1
                elif(s[i-1]=='B'):
                    bluecount+=1

            if((i+1)<n):
                if(s[i+1]=='R'):
                    redcount+=1
                elif(s[i+1]=='B'):
                    bluecount+=1

            if(s[i]=='?'):
                if(redcount<bluecount):
                    s[i]='R'
                    count-=1
                elif(bluecount>redcount):
                    s[i]='B'
                    count-=1

           

              
                 

    strings="".join(s)            
    imperfectness=strings.count("RR") + strings.count("BB")

    print(strings)                      







cases= int(input())

for i in range(cases):
    solve()





