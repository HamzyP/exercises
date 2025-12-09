"""
AquaQ Challenge 0: What's a numpad?
----------------------------
Reads 'input.txt' containing pairs of (Key, Presses).
Maps standard T9 keypad layout to characters.
Decodes '6 3' -> Key 6 ('mno'), 3rd letter -> 'o'.
Output: "OH SO THEY HAVE INTERNET ON COMPUTERS NOW"
"""

with open('./input.txt', 'r') as file:
    lines = file.readlines()


reference = {
    0 : ' ',
    1 : '',
    2 : 'abc',
    3 : 'def',
    4 : 'ghi',
    5 : 'jkl',
    6 : 'mno',
    7 : 'pqrs',
    8 : 'tuv',
    9 : 'wxyz',
}


store = []
for line in lines:
    line = line.replace('\n', '')
    line = line.split(' ')
    store.append([int(line[0]),int(line[1])])

# converts key number and presses to corresponding letter.
def conversion(key, times):
    a = reference[key] 
    times = times -1
    print(a[times:times+1], end="")


for i in store:
    conversion(i[0] ,i[1])