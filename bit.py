count=0
for t in range(input()):
	a=raw_input()
	if("++" in a):
		count+=1
	if("--" in a):
		count-=1
print count
