# Student Marks Management System

## Overview

This C program is a **Student Marks Management System** that dynamically allocates memory to store student information, including their **ID, name, number of subjects, and marks**. It calculates and displays the **total and average marks** for each student.

## Features

- Allows the user to input multiple students.
- Dynamically allocates memory for each student's marks.
- Calculates **total and average marks** per student.
- Displays student details in a structured format.
- Prevents **memory leaks** by freeing allocated memory.

## Prerequisites

- A C compiler (e.g., GCC)
- Basic understanding of C programming, pointers, and dynamic memory allocation

## Compilation & Execution

### **1. Compile the program**

Use the following command in the terminal:

```sh
gcc -o student_marks student_marks.c
```

### **2. Run the program**

Execute the compiled file:

```sh
./student_marks
```

## Usage Example

```
Enter the number of students: 2

Enter Info for Student 1:
Enter ID: 101
Enter Name: Sumaiya Sharmeen
Enter the number of subjects for student 1: 3
Enter marks for 3 subjects:
Subject 1: 85
Subject 2: 90
Subject 3: 78

Enter Info for Student 2:
Enter ID: 102
Enter Name: Nur A Jannat Shuchi
Enter the number of subjects for student 2: 2
Enter marks for 2 subjects:
Subject 1: 88
Subject 2: 92

Student Information:

Summary for Student 1:
ID: 101
Name: Sumaiya Sharmeen
Total Marks: 253.00
Average Marks: 84.33

Summary for Student 2:
ID: 102
Name: Nur A Jannat Shuchi
Total Marks: 180.00
Average Marks: 90.00
```

## Code Explanation

1. **Memory Allocation:**

   - Uses `malloc()` to allocate memory dynamically for students and their marks.
   - Ensures memory allocation is successful before using it.

2. **Input Handling:**

   - Reads student details using`scanf()`.
   - Uses `scanf(" %[^"]", s[i].name);` to correctly capture full names with spaces.

3. **Calculations:**

   - Computes **total and average marks** per student.


## Potential Enhancements

- Implement file handling to **save and load** student data.
- Add functionality to **sort students** based on total marks.
- Provide an option to update or delete student records.



