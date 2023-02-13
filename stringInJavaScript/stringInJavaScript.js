let s1 = "This is the house that Jack built.";

console.log("Original: ${s1}", s1)

console.log("Substr(0,4):", s1.substring(0,4))

console.log("Substr(5,2):", s1.substring(5,2))

console.log("Find(\"This\"):", s1.indexOf("This"))

console.log("Find('J'):", s1.indexOf("J"))

console.log("Find(\"is\"):", s1.indexOf("is", 4))

console.log("Length:", s1.length)

s1 = s1.substring(0,0) + s1.substring(5,s1.length);
console.log("Erase(0,5):", s1)

console.log("Length:", s1.length)