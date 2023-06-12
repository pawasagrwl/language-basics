import java.io.FileWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.HashMap;
import java.util.ArrayList;
import java.util.List;

public class Basics {
    public static void fileIO() {
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

    public static void consoleInput() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String input = scanner.nextLine();
        System.out.println("You entered: " + input);
    }

    public static void stringSplit() {
        String str = "This is a test string.";
        String[] results = str.split(" ");
    }

    public static void stringLength() {
        String str = "Test string";
        System.out.println(str.length());
    }

    public static void twoDArrays() {
        int[][] arr = {{1, 2, 3}, {4, 5, 6}};
    }

    public static void hashMapUsage() {
        HashMap<String, Integer> hashmap = new HashMap<>();
        hashmap.put("one", 1);
        hashmap.put("two", 2);
    }

    public static void arrayLength() {
        int[] arr = {1, 2, 3, 4, 5};
        int length = arr.length;
        System.out.println("Array Length: " + length);
    }

    public static void arrayListModification() {
        ArrayList<Integer> arr = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        arr.add(6); // Adding an element to the array
        arr.remove(2); // Removing the 3rd element from the array
    }

    public static void main(String[] args) {
        fileIO();
        consoleInput();
        stringSplit();
        stringLength();
        twoDArrays();
        hashMapUsage();
        arrayLength();
        arrayListModification();
    }
}
