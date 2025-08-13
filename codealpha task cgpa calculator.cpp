#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double grade, creditHours;
    double totalCredits = 0.0, totalGradePoints = 0.0;

    cout << fixed << setprecision(2); // Display results with 2 decimal places
    cout << "\n--- Enter course details ---\n";

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (on 4.0 scale): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> creditHours;

        totalCredits += creditHours;
        totalGradePoints += (grade * creditHours);

        cout << "Recorded: Grade " << grade << ", Credit Hours " << creditHours << "\n";
    }

    double semesterGPA = totalGradePoints / totalCredits;
    double overallCGPA = semesterGPA; // Here, assuming only current semester

    cout << "\n--- Results ---\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Semester GPA: " << semesterGPA << endl;
    cout << "Overall CGPA: " << overallCGPA << endl;

    return 0;
}
