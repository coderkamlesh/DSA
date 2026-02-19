package main

import "fmt"

type Student struct {
	Name  string
	Score int
}

type Car struct {
	Model string
	Year  int
}

// Pass by Value: Original Car change nahi hogi
func updateByValue(c Car) {
	c.Model = "Tesla"
}

// Pass by Pointer: Original Car change hogi
func updateByPointer(c *Car) {
	c.Model = "Tesla"
}
func simple() {
	x := 10 // Stack pe (fast)
	fmt.Println(x)
} // x yahin destroy

func returnsPtr() *int {
	x := 10   // Compiler: "Oh, address return ho raha hai!"
	return &x // x ko HEAP pe move kar do (escape ho gaya)
} // x alive rahega jitni der *int use ho raha hai

func createPerson() *Person {
	// p := Person{name: "Rahul"} // Stack pe start
	return &Person{name: "Rahul"} // Heap pe escape
}

type Person struct {
	name string
}

func main() {
	// a := 42
	// ptr := &a // & se address liya

	// fmt.Println("Address:", ptr) // Address print karega
	// fmt.Println("Value:", *ptr)  // * se value de-reference kari

	// *ptr = 100                        // Pointer ke through value badal di
	// fmt.Println("New Value of a:", a) // Output: 100

	s1 := Student{Name: "Rohit", Score: 90}

	// 2. Pointer to Struct (Address-of operator use karke)
	ptr := &s1

	fmt.Println("Address of s1:", ptr)
	fmt.Println("Value through pointer:", *ptr)
	ptr.Name = "Suresh" // Automatic de-referencing
	fmt.Println(s1.Name)
	fmt.Println("Value through pointer after name change:", *ptr)

	myCar := Car{Model: "Maruti", Year: 2020}

	updateByValue(myCar)
	fmt.Println("After Value:", myCar.Model) // Output: Maruti

	updateByPointer(&myCar)
	fmt.Println("After Pointer:", myCar.Model) // Output: Tesla
	simple()
	fmt.Println(*returnsPtr())

	person := createPerson() // Safe! Heap pe hai
	fmt.Println(person.name)

}
