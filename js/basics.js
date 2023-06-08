const fs = require('fs');
const readline = require('readline');

// 1. Reading from and writing to files
function fileReadWrite() {
    fs.writeFileSync('test.txt', 'Hello World!');
    console.log(fs.readFileSync('test.txt', 'utf8'));
}

// 2. Reading input from the console
async function readConsole() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question('Enter a string: ', (input) => {
        console.log(`You entered: ${input}`);
        rl.close();
    });
}

// 3. Splitting strings
function splitString(str) {
    console.log(str.split(" "));
}

// 5. Declare and use 2D arrays
function twoDimensionalArrays() {
    let arr = [[1, 2, 3], [4, 5, 6]];
    console.log(arr);
}

fileReadWrite();
readConsole();
splitString("This is a test string.");
twoDimensionalArrays();
