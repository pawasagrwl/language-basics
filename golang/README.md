# C++ Basic Coding Interview Reference

This repository is a reference guide for common operations in Go, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```go
package main

import (
	"fmt"
	"io/ioutil"
)

func main() {
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
```
2. User Input: Reading Input from the Console

```go
package main

import (
	"fmt"
	"bufio"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter text: ")
	text, _ := reader.ReadString('\n')
	fmt.Println(text)
}
```

3. String Manipulation: Splitting Strings

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Hello, World!"
	splitted := strings.Split(str, ",")
	fmt.Println(splitted)
}
```

4. String Properties: Understanding String Length

```go
package main

import (
	"fmt"
)

func main() {
	str := "Hello, World!"
	fmt.Println(len(str))
}
```

5. Data Structures: Declaration and Use of 2D Arrays

```go
package main

import (
	"fmt"
)

func main() {
	var matrix [2][3]int
	matrix[0][0] = 1
	matrix[0][1] = 2
	matrix[0][2] = 3
	matrix[1][0] = 4
	matrix[1][1] = 5
	matrix[1][2] = 6
	fmt.Println(matrix)
}
```

6. String Handling: Working with Null-Terminated Strings

```go
// In Go, strings are not null-terminated.
```

7. Data Structures: Utilization of Hashmaps

```go
package main

import (
	"fmt"
)

func main() {
	hashmap := make(map[string]int)
	hashmap["one"] = 1
	hashmap["two"] = 2
	fmt.Println(hashmap)
}
```

8. Data Inspection: Finding the Length of an Array or String

```go
package main

import (
	"fmt"
)

func main() {
	arr := []int{1, 2, 3, 4, 5}
	fmt.Println(len(arr))
}
```

9. Data Modification: Adding and Removing Elements from an Array/String

```go
package main

import (
	"fmt"
)

func main() {
	arr := []int{1, 2, 3, 4, 5}
	arr = append(arr, 6)
	fmt.Println(arr)

	arr = append(arr[:2], arr[3:]...)
	fmt.Println(arr)
}
```
