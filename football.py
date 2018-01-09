a=raw_input()
l=len(a)
count=0
flag=0
for i in range(1,l):
	if(a[i]==a[i-1]):
		count+=1
	else:
		count=0
	if(count==6):
		flag=1
		break
if(flag==1):
	print "YES"
else:
	print "NO"
