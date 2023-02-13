s1 = "This is the house that Jack built."

print("Original:", s1)

print("Substr(0,4):", s1[0:4])

print("Substr(5,2):", s1[5:5+2])

print("Find(\"This\"):", s1.find("This"))

print("Find('J'):", s1.find("J"))

print("Find(\"is\"):", s1.find("is", 4))

print("Length:", len(s1))

s1 = s1[:0] + s1[5:]
print("Erase(0,5):", s1)

print("Length:", len(s1))
