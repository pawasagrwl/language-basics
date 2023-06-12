# Rust Basic Coding Interview Reference

This repository is a reference guide for common operations in Rust, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```Rust
use std::fs::File;
use std::io::prelude::*;

fn main() {
    let mut file = File::create("test.txt").unwrap();
    file.write_all(b"Hello World!").unwrap();

    let mut file = File::open("test.txt").unwrap();
    let mut contents = String::new();
    file.read_to_string(&mut contents).unwrap();
    println!("{}", contents);
}
```
2. User Input: Reading Input from the Console

```Rust
use std::io::{self, Write};

fn main() {
    print!("Enter a string: ");
    io::stdout().flush().unwrap();

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    println!("You entered: {}", input.trim());
}
```

3. String Manipulation: Splitting Strings

```Rust
fn main() {
    let s = "This is a test string.";
    let parts: Vec<&str> = s.split(' ').collect();
    println!("{:?}", parts);
}
```

4. String Properties: Understanding String Length

```Rust
fn main() {
    let s = "Test string";
    println!("{}", s.len());
}
```

5. Data Structures: Declaration and Use of 2D Arrays

```Rust
fn main() {
    let arr = vec![vec![1, 2, 3], vec![4, 5, 6]];
    println!("{:?}", arr);
}
```

6. String Handling: Working with Null-Terminated Strings

```Rust
// In Rust, strings are not null-terminated.
```

7. Data Structures: Utilization of Hashmaps

```Rust
use std::collections::HashMap;

fn main() {
    let mut map: HashMap<String, i32> = HashMap::new();
    map.insert("one".to_string(), 1);
    map.insert("two".to_string(), 2);
    println!("{:?}", map);
}
```

8. Data Inspection: Finding the Length of an Array or String

```Rust
fn main() {
    let arr = [1, 2, 3, 4, 5];
    println!("{}", arr.len());
}
```

9. Data Modification: Adding and Removing Elements from an Array/String

```Rust
fn main() {
    let mut arr = vec![1, 2, 3, 4, 5];
    arr.push(6); // Adding an element to the array
    arr.remove(2); // Removing the 3rd element from the array
    println!("{:?}", arr);
}
```
