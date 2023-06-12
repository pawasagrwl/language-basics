# Python Basic Coding Interview Reference

This repository is a reference guide for common operations in Python, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```Python
with open('test.txt', 'w') as f:
    f.write('Hello World!')

with open('test.txt', 'r') as f:
    data = f.read()
    print(data)
```
2. User Input: Reading Input from the Console

```Python
input_str = input("Enter a string: ")
print(f"You entered: {input_str}")
```

3. String Manipulation: Splitting Strings

```Python
str = "This is a test string."
results = str.split(" ")
print(results)
```

4. String Properties: Understanding String Length

```Python
str = "Test string"
print(len(str))
```

5. Data Structures: Declaration and Use of 2D Arrays

```Python
arr = [[1, 2, 3], [4, 5, 6]]
print(arr)
```

6. String Handling: Working with Null-Terminated Strings

```Python
// In Python, strings are not null-terminated.
```

7. Data Structures: Utilization of Hashmaps

```Python
dict = {}
dict["one"] = 1
dict["two"] = 2
print(dict)
```

8. Data Inspection: Finding the Length of an Array or String

```Python
arr = [1, 2, 3, 4, 5]
print(len(arr))
```

9. Data Modification: Adding and Removing Elements from an Array/String

```Python
arr = [1, 2, 3, 4, 5]
arr.append(6) # Adding an element to the array
arr.pop(2) # Removing the 3rd element from the array
print(arr)
```
