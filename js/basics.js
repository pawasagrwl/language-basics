const fs = require('fs');
const readline = require('readline');

function fileIO() {
    fs.writeFileSync('test.txt', 'Hello World!');

    let data = fs.readFileSync('test.txt', 'utf8');
    console.log(data);
}

function consoleInput() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question('Enter a string: ', (answer) => {
        console.log(`You entered: ${answer}`);
        rl.close();
    });
}

function stringSplit() {
    let str = "This is a test string.";
    let results = str.split(" ");
    console.log(results);
}

function stringLength() {
    let str = "Test string";
    console.log(str.length);
}

function twoDArrays() {
    let arr = [[1, 2, 3], [4, 5, 6]];
    console.log(arr);
}

function hashMapUsage() {
    let hashmap = {};
    hashmap["one"] = 1;
    hashmap["two"] = 2;
    console.log(hashmap);
}

function arrayLength() {
    let arr = [1, 2, 3, 4, 5];
    console.log(arr.length);
}

function arrayModification() {
    let arr = [1, 2, 3, 4, 5];
    arr.push(6); // Adding an element to the array
    arr.splice(2, 1); // Removing the 3rd element from the array
    console.log(arr);
}

fileIO();
consoleInput();
stringSplit();
stringLength();
twoDArrays();
hashMapUsage();
arrayLength();
arrayModification();
