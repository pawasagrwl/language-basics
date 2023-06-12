# Java Basic Coding Interview Reference

This repository is a reference guide for common operations in Java, which are often forgotten but frequently used in coding interviews.

Here, you will find code snippets for:

1. File I/O: Reading From and Writing To Files

```Java
import java.io.FileWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;

public class FileIOExample {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("test.txt");
            writer.write("Hello World!");
            writer.close();

            BufferedReader reader = new BufferedReader(new FileReader("test.txt"));
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
```
2. User Input: Reading Input from the Console

```Java
import java.util.Scanner;

public class UserInputExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String input = scanner.nextLine();
        System.out.println("You entered: " + input);
    }
}
```

3. String Manipulation: Splitting Strings

```Java
public class StringSplitExample {
    public static void main(String[] args) {
        String str = "This is a test string.";
        String[] results = str.split(" ");
    }
}
```

4. String Properties: Understanding String Length

```Java
public class StringLengthExample {
    public static void main(String[] args) {
        String str = "Test string";
        System.out.println(str.length());
    }
}
```

5. Data Structures: Declaration and Use of 2D Arrays

```Java
public class TwoDArrayExample {
    public static void main(String[] args) {
        int[][] arr = {{1, 2, 3}, {4, 5, 6}};
    }
}
```

6. String Handling: Working with Null-Terminated Strings

```Java
// In Java, strings are not null-terminated.
```

7. Data Structures: Utilization of Hashmaps

```Java
import java.util.HashMap;

public class HashMapExample {
    public static void main(String[] args) {
        HashMap<String, Integer> hashmap = new HashMap<>();
        hashmap.put("one", 1);
        hashmap.put("two", 2);
    }
}
```

8. Data Inspection: Finding the Length of an Array or String

```Java
public class ArrayLengthExample {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int length = arr.length;
        System.out.println("Array Length: " + length);
    }
}
```

9. Data Modification: Adding and Removing Elements from an Array/String

```Java
import java.util.ArrayList;
import java.util.List;

public class ArrayListModificationExample {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        arr.add(6); // Adding an element to the array
        arr.remove(2); // Removing the 3rd element from the array
    }
}
```
