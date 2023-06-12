# C++ Basic Coding Interview Reference

This repository is a reference guide for common operations in C++, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```cpp
#include<iostream>
#include<fstream>
#include<string>

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
```
2. User Input: Reading Input from the Console

```cpp
#include<iostream>
#include<string>

std::string input;
std::cout << "Enter a string: ";
getline(std::cin, input);
std::cout << "You entered: " << input << std::endl;
```

3. String Manipulation: Splitting Strings

```cpp
#include<sstream>
#include<string>
#include<vector>
#include<iterator>

std::string str = "This is a test string.";
std::istringstream iss(str);
std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());
```

4. String Properties: Understanding String Length

```cpp
#include<string>
#include<iostream>

std::string str = "Test string";
std::cout << str.length() << std::endl;
```

5. Data Structures: Declaration and Use of 2D Arrays

```cpp
#include<iostream>

int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

6. String Handling: Working with Null-Terminated Strings

```cpp
#include<iostream>

char str[] = "Hello World!";
std::cout << str << std::endl;
```

7. Data Structures: Utilization of Hashmaps

```cpp
#include<unordered_map>

std::unordered_map<std::string, int> hashmap;
hashmap["one"] = 1;
hashmap["two"] = 2;
```

8. Data Inspection: Finding the Length of an Array or String

```cpp
#include<iostream>

int arr[] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / sizeof(arr[0]);
std::cout << "Array Length: " << length << std::endl;
```

9. Data Modification: Adding and Removing Elements from an Array/String

```cpp
#include<vector>

std::vector<int> arr = {1, 2, 3, 4, 5};
arr.push_back(6); // Adding an element to the array
arr.erase(arr.begin() + 2); // Removing the 3rd element from the array
```
