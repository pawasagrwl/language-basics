# 1. Reading from and writing to files
def fileReadWrite():
    with open('test.txt', 'w') as f:
        f.write('Hello World!')
    
    with open('test.txt', 'r') as f:
        print(f.read())

# 2. Reading input from the console
def readConsole():
    input_str = input("Enter a string: ")
    print("You entered: ", input_str)

# 3. Splitting strings
def splitString(str):
    print(str.split(" "))

# 5. Declare and use 2D lists
def twoDimensionalLists():
    arr = [[1, 2, 3], [4, 5, 6]]
    print(arr)

fileReadWrite()
readConsole()
splitString("This is a test string.")
twoDimensionalLists()
