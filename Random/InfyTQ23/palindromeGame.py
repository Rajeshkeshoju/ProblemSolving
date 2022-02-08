def isPalindrome(word):
    if(word == word[::-1]):
        return True
        
    return False
    
def isVowel(char):
    a = (char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U')
    b = (char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u')
    
    return a or b

def getVowels(string):
    vowels = []
    
    for char in string:
        if(isVowel(char)):
            vowels.append(char)
    
    return vowels
    
def getConsonants(string):
    consonants = []
    
    for char in string:
        if(not isVowel(char)):
            consonants.append(char)
    
    return consonants
    

inputString = input()
words = inputString.split(" ")

result = ""
nonPalindromesResult = []
palindromesResult = []

for string in words:
    
    if(isPalindrome(string)):
        vowels = getVowels(string)
        vowels.sort()
        
        s = ""
        for  x in vowels:
            s += x
        
        consonants = getConsonants(string)
        for x in consonants:
            s+= x
        
        palindromesResult.append(s)
    else:
        
        s = ""
        v = ""
        for i in range(0, len(string)):
            if(i%2 == 0 and isVowel(string[i])):
                v += string[i]
                continue
            
            s += string[i]
        s += v
        nonPalindromesResult.append(s)
    

for x in palindromesResult:
    result += x + ","
    
for x in nonPalindromesResult:
    result += x + ","
        
result = result[:-1]
print(result)
