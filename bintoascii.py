def bintoascii(pattern):
	num=0
	count = 0
	answer = ''
	for c in pattern:

		num = num*2 + int(c)
		count += 1
		if(count == 8):
			count=0
			answer += chr(num)
			num=0

	return answer