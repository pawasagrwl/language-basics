def file_io():
    with open('test.txt', 'w') as f:
        f.write('Hello World!')

    with open('test.txt', 'r') as f:
        data = f.read()
        print(data)

def console_input():
    input_str = input("Enter a string: ")
    print(f"You entered: {input_str}")

def string_split():
    str = "This is a test string."
    results = str.split(" ")
    print(results)

def string_length():
    str = "Test string"
    print(len(str))

def two_d_lists():
    arr = [[1, 2, 3], [4, 5, 6]]
    print(arr)

def dict_usage():
    dict = {}
    dict["one"] = 1
    dict["two"] = 2
    print(dict)

def list_length():
    arr = [1, 2, 3, 4, 5]
    print(len(arr))

def list_modification():
    arr = [1, 2, 3, 4, 5]
    arr.append(6) # Adding an element to the array
    arr.pop(2) # Removing the 3rd element from the array
    print(arr)

file_io()
console_input()
string_split()
string_length()
two_d_lists()
dict_usage()
list_length()
list_modification()
