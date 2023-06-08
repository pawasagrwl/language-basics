#include<iostream>
#include<fstream>
#include<string>
#include<vector>

// 1. Reading from and writing to files
void fileReadWrite() {
    std::ofstream outfile("test.txt");
    outfile << "Hello World!" << std::endl;
    outfile.close();

    std::string line;
    std::ifstream infile("test.txt");
    if (infile.is_open()) {
        while (getline(infile, line)) {
            std::cout << line << '\n';
        }
        infile.close();
    }
}

// 2. Reading input from the console
void readConsole() {
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;
}

// 3. Splitting strings - in C++, we typically use a function from sstream or a similar library
void splitString(std::string str) {
    std::istringstream iss(str);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());
}

// 5. Declare and use 2D arrays
void twoDimensionalArrays() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
}

// 6. Handling null-terminated strings in C++
void handleNullTerminatedStrings() {
    char str[] = "Hello World!";
    std::cout << str << std::endl;
}

int main() {
    fileReadWrite();
    readConsole();
    splitString("This is a test string.");
    twoDimensionalArrays();
    handleNullTerminatedStrings();

    return 0;
}
