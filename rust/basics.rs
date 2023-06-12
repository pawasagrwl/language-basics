
And here is the `basics.rs` file:

```rust
use std::fs::File;
use std::io::prelude::*;
use std::collections::HashMap;
use std::io::{self, Write};

fn file_io() {
    let mut file = File::create("test.txt").unwrap();
    file.write_all(b"Hello World!").unwrap();

    let mut file = File::open("test.txt").unwrap();
    let mut contents = String::new();
    file.read_to_string(&mut contents).unwrap();
    println!("{}", contents);
}

fn console_input() {
    print!("Enter a string: ");
    io::stdout().flush().unwrap();

    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    println!("You entered: {}", input.trim());
}

fn string_split() {
    let s = "This is a test string.";
    let parts: Vec<&str> = s.split(' ').collect();
    println!("{:?}", parts);
}

fn string_length() {
    let s = "Test string";
    println!("{}", s.len());
}

fn two_d_vectors() {
    let arr = vec![vec![1, 2, 3], vec![4, 5, 6]];
    println!("{:?}", arr);
}

fn hashmap_usage() {
    let mut map: HashMap<String, i32> = HashMap::new();
    map.insert("one".to_string(), 1);
    map.insert("two".to_string(), 2);
    println!("{:?}", map);
}

fn array_length() {
    let arr = [1, 2, 3, 4, 5];
    println!("{}", arr.len());
}

fn vector_modification() {
    let mut arr = vec![1, 2, 3, 4, 5];
    arr.push(6); // Adding an element to the array
    arr.remove(2); // Removing the 3rd element from the array
    println!("{:?}", arr);
}

fn main() {
    file_io();
    console_input();
    string_split();
    string_length();
    two_d_vectors();
    hashmap_usage();
    array_length();
    vector_modification();
}
