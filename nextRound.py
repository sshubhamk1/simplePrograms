n,k=map(int,raw_input().split(" "))
ls=[int(x) for x in raw_input().split()]
count=0
for i in ls:
	if(i<ls[k-1] or i<1):
		break
	count+=1
print count
