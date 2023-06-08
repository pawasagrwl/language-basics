package main

import (
	"bufio"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

// 1. Reading from and writing to files
func fileReadWrite() {
	data := []byte("Hello World!\n")
	err := ioutil.WriteFile("test.txt", data, 0644)
	if err != nil {
		panic(err)
	}

	readData, err := ioutil.ReadFile("test.txt")
	if err != nil {
		panic(err)
	}

	fmt.Print(string(readData))
}

// 2. Reading input from the console
func readConsole() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter text: ")
	text, _ := reader.ReadString('\n')
	fmt.Println("You entered:", text)
}

// 3. Splitting strings
func splitString(str string) {
	splitted := strings.Split(str, " ")
	fmt.Println(splitted)
}

// 5. Declare and use 2D slices
func twoDimensionalSlices() {
	matrix := make([][]int, 3)
	for i := 0; i < 3; i++ {
		matrix[i] = make([]int, 3)
	}
}

func main() {
	fileReadWrite()
	readConsole()
	splitString("This is a test string.")
	twoDimensionalSlices()
}
