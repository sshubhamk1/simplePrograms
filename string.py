word=raw_input()
word=word.lower()
vowel=['a','e','i','o','u','y']
ans=""
for i in word:
	if(i in vowel):
		continue
	else:
		ans=ans+"."+i
print ans
