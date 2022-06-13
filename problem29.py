"""
Run-length encoding is a fast and simple methode of encoding strings. The basic idea is to represent repeated successive
characters as a single count and character. for example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A"
Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of
alphabetic characters. You can assume the string to be decoded is valid.
"""
str0=input('Enter the encrypted data')
dec=""
k=0
#for decoding the data
#separating numbers for string using ascii values
for i in str0:
    if (ord(i)>=48 and ord(i)<=57):
        k=(k*10)+(ord(i)-48)
    else:
        dec=dec+(k*i)
        k=0
print(dec)
#encoding the string
str1=input('Enter the data to be encoded: ')
enc=" "
c=0
a=str1[0]
for ch in str1:
    if ch==a:
        c+=1
    else:
        enc=enc+str(c)
        enc=enc+a
        a=ch
        c=1
enc=enc+str(c)
enc=enc+a
print(enc)
