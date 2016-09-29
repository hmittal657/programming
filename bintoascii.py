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

#input
# 011011000110010101100001011100110111010001101110011011110111010001101100011000010111001101110100
# output
# leastnotlast
