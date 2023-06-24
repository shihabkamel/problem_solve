a=int(input())

result=0
for i in range(a):
    b= list(map(int,input().strip().split()))[:3]
    c=sum(b)
    b.clear()
    if(c>=2):
        result+=1
print(result)        

        
    

