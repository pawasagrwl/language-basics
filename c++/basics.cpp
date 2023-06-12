#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<iterator>
#include<unordered_map>

int main() {
    // 1. File I/O: Reading From and Writing To Files
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

    // 2. User Input: Reading Input from the Console
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;

    // 3. String Manipulation: Splitting Strings
    std::string str = "This is a test string.";
    std::istringstream iss(str);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

    // 4. String Properties: Understanding String Length
    std::string strLength = "Test string";
    std::cout << strLength.length() << std::endl;

    // 5. Data Structures: Declaration and Use of 2D Arrays
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 6. String Handling: Working with Null-Terminated Strings
    char strNullTerminated[] = "Hello World!";
    std::cout << strNullTerminated << std::endl;

    // 7. Data Structures: Utilization of Hashmaps
    std::unordered_map<std::string, int> hashmap;
    hashmap["one"] = 1;
    hashmap["two"] = 2;

    // 8. Data Inspection: Finding the Length of an Array or String
    int arrLength[] = {1, 2, 3, 4, 5};
    int length = sizeof(arrLength) / sizeof(arrLength[0]);
    std::cout << "Array Length: " << length << std::endl;

    // 9. Data Modification: Adding and Removing Elements from an Array/String
    std::vector<int> arrVector = {1, 2, 3, 4, 5};
    arrVector.push_back(6); // Adding an element to the array
    arrVector.erase(arrVector.begin() + 2); // Removing the 3rd element from the array

    return 0;
}
