# JavaScript Basic Coding Interview Reference

This repository is a reference guide for common operations in JavaScript, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```JavaScript
const fs = require('fs');

fs.writeFileSync('test.txt', 'Hello World!');
let data = fs.readFileSync('test.txt', 'utf8');
console.log(data);
```
2. User Input: Reading Input from the Console

```JavaScript
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter a string: ', (answer) => {
  console.log(`You entered: ${answer}`);
  rl.close();
});
```

3. String Manipulation: Splitting Strings

```JavaScript
let str = "This is a test string.";
let results = str.split(" ");
console.log(results);
```

4. String Properties: Understanding String Length

```JavaScript
let str = "Test string";
console.log(str.length);
```

5. Data Structures: Declaration and Use of 2D Arrays

```JavaScript
let arr = [[1, 2, 3], [4, 5, 6]];
console.log(arr);
```

6. String Handling: Working with Null-Terminated Strings

```JavaScript
// In JavaScript, strings are not null-terminated.
```

7. Data Structures: Utilization of Hashmaps

```JavaScript
let hashmap = {};
hashmap["one"] = 1;
hashmap["two"] = 2;
console.log(hashmap);
```

8. Data Inspection: Finding the Length of an Array or String

```JavaScript
let arr = [1, 2, 3, 4, 5];
console.log(arr.length);
```

9. Data Modification: Adding and Removing Elements from an Array/String

```JavaScript
let arr = [1, 2, 3, 4, 5];
arr.push(6); // Adding an element to the array
arr.splice(2, 1); // Removing the 3rd element from the array
console.log(arr);
```
