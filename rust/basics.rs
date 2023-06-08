use std::fs::File;
use std::io::{self, prelude::*, BufReader};

// 1. Reading from and writing to files
fn fileReadWrite() -> io::Result<()> {
    let mut file = File::create("test.txt")?;
    file.write_all(b"Hello World!")?;

    let file = File::open("test.txt")?;
    let reader = BufReader::new(file);

    for line in reader.lines() {
        println!("{}", line?);
    }
    Ok(())
}

// 2. Reading input from the console
fn readConsole() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    println!("You entered: {}", input);
}

// 3. Splitting strings
fn splitString(s: &str) {
    let split: Vec<&str> = s.split(" ").collect();
    println!("{:?}", split);
}

// 5. Declare and use 2D vectors
fn twoDimensionalVectors() {
    let vec = vec![vec![1, 2, 3], vec![4, 5, 6]];
    println!("{:?}", vec);
}

fn main() -> io::Result<()> {
    fileReadWrite()?;
    readConsole();
    splitString("This is a test string.");
    twoDimensionalVectors();
    Ok(())
}
