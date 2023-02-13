package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "This is the house that Jack built."

	fmt.Println("Original:", s1)

	fmt.Println("Substr(0,4):", s1[0:4])

	fmt.Println("Substr(5,2):", s1[5:5+2])

	fmt.Println("Find(\"This\"):", strings.Index(s1, "This"))

	fmt.Println("Find('J'):", strings.Index(s1, "J"))

	fmt.Println("Find(\"is\"):", strings.Index(s1[4:], "is")+4)

	fmt.Println("Length:", len(s1))

	s1 = s1[:0] + s1[5:]
	fmt.Println("Erase(0,5):", s1)

	fmt.Println("Length:", len(s1))

}
