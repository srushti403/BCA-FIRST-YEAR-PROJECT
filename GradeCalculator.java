import java.util.Scanner;

// Work Sample: Simple Number Grading System
public class GradeCalculator {
    public static void main(String[] args) {
        int marks = 85; // Example marks input
        char grade;

        // Logical checking using if-else statements
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 75) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else {
            grade = 'F';
        }

        System.out.println("Student Marks: " + marks);
        System.out.println("Calculated Grade: " + grade);
    }
}
