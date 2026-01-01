/*QUESTION : “Create a Student Attendance Management System in C using arrays.
The program should allow marking attendance, displaying attendance status, and counting present and absent students.” */
// Arju Rahangdale 10012
#include <stdio.h>

int main() {
    int n, i;
    int attendance[100];
    int present = 0, absent = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    printf("Enter attendance (1 = Present, 0 = Absent):\n"); // Input attendance
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }
    
    printf("\nAttendance Report:\n"); // Display attendance and count
    for (i = 0; i < n; i++) {
        if (attendance[i] == 1) {
            printf("Student %d: Present\n", i + 1);
            present++;
        } else {
            printf("Student %d: Absent\n", i + 1);
            absent++;
        }
    }

    // Final count
    printf("\nTotal Present Students: %d", present);
    printf("\nTotal Absent Students: %d", absent);

    return 0;
}
/* OUTPUT :
Enter number of students: 5
Enter attendance (1 = Present, 0 = Absent):
Student 1: 1
Student 2: 0
Student 3: 1
Student 4: 1
Student 5: 0

Attendance Report:
Student 1: Present
Student 2: Absent
Student 3: Present
Student 4: Present
Student 5: Absent

Total Present Students: 3
Total Absent Students: 2
*/
