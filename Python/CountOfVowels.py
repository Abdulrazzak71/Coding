s = str(input("Enter string : "))
# s = "education"
vowl = "aeiouAEIOU"
count = 0
for i in range(len(s)):
    if s[i] in vowl:
        count+=1

print(f"Total number of Vowels in {s} = {count}")