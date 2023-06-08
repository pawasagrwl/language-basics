import java.io.*;
import java.util.Arrays;
import java.util.Scanner;

public class Basics {

    // 1. Reading from and writing to files
    public static void fileReadWrite() throws IOException {
        BufferedWriter writer = new BufferedWriter(new FileWriter("test.txt"));
        writer.write("Hello World!");
        writer.close();

        BufferedReader reader = new BufferedReader(new FileReader("test.txt"));
        String line = reader.readLine();
        while (line != null) {
            System.out.println(line);
            line = reader.readLine();
        }
        reader.close();
    }

    // 2. Reading input from the console
    public static void readConsole() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String input = scanner.nextLine();
        System.out.println("You entered: " + input);
    }

    // 3. Splitting strings
    public static void splitString(String str) {
        String[] parts = str.split(" ");
        System.out.println(Arrays.toString(parts));
    }

    // 5. Declare and use 2D arrays
    public static void twoDimensionalArrays() {
        int[][] arr = new int[][]{{1, 2, 3}, {4, 5, 6}};
    }

    public static void main(String[] args) throws IOException {
        fileReadWrite();
        readConsole();
        splitString("This is a test string.");
        twoDimensionalArrays();
    }
}
