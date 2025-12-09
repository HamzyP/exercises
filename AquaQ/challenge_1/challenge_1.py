import string

def convert(st):
# set the strings non-hexadecimal chars to 0
    char_list = list(st)
    
    for i in range(len(char_list)):
        if char_list[i] not in string.hexdigits:
            char_list[i] = '0'

    
    # pad the string length to the next multiple of 3
    remainder = len(char_list) % 3
    if remainder != 0:
        padding = 3 - remainder
        
        char_list.extend(['0'] * padding)

    # split the result into 3 equal sections.
    splitBy = len(char_list) / 3
    split1 = char_list[0:int(splitBy)]
    split2 = char_list[int(splitBy):int(splitBy)*2]
    split3 = char_list[int(splitBy)*2:]
    
    print(split2)
# the first two digits of each remaining section are the hex components.
    hex1 = split1[0] + split1[1]
    hex2 = split2[0] + split2[1]
    hex3 = split3[0] + split3[1]
    
    print(hex1+hex2+hex3)

convert('kdb4life')
convert('do you think that maybe like, 1 in 10 people could be actually robots?')