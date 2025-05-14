// #include <stdio.h>

// #define SIZE 100

// int main() {
//     int arr[SIZE], n = 0, choice, pos, value, i, found;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     do {
//         printf("\n------ MENU ------\n");
//         printf("1. Insert\n");
//         printf("2. Update\n");
//         printf("3. Delete\n");
//         printf("4. Display\n");
//         printf("5. Search\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:  // Insert
//                 if (n == SIZE) {
//                     printf("Array is full!\n");
//                     break;
//                 }
//                 printf("Enter position to insert (0 to %d): ", n);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos > n) {
//                     printf("Invalid position!\n");
//                     break;
//                 }
//                 printf("Enter value to insert: ");
//                 scanf("%d", &value);
//                 for (i = n; i > pos; i--) {
//                     arr[i] = arr[i - 1];
//                 }
//                 arr[pos] = value;
//                 n++;
//                 printf("Value inserted successfully!\n");
//                 break;

//             case 2:  // Update
//                 printf("Enter position to update (0 to %d): ", n - 1);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos >= n) {
//                     printf("Invalid position!\n");
//                     break;
//                 }
//                 printf("Enter new value: ");
//                 scanf("%d", &value);
//                 arr[pos] = value;
//                 printf("Value updated successfully!\n");
//                 break;

//             case 3:  // Delete
//                 printf("Enter position to delete (0 to %d): ", n - 1);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos >= n) {
//                     printf("Invalid position!\n");
//                     break;
//                 }
//                 for (i = pos; i < n - 1; i++) {
//                     arr[i] = arr[i + 1];
//                 }
//                 n--;
//                 printf("Value deleted successfully!\n");
//                 break;

//             case 4:  // Display
//                 printf("Array elements: ");
//                 for (i = 0; i < n; i++) {
//                     printf("%d ", arr[i]);
//                 }
//                 printf("\n");
//                 break;

//             case 5:  // Search
//                 printf("Enter value to search: ");
//                 scanf("%d", &value);
//                 found = 0;
//                 for (i = 0; i < n; i++) {
//                     if (arr[i] == value) {
//                         printf("Value found at position %d\n", i);
//                         found = 1;
//                         break;
//                     }
//                 }
//                 if (!found) {
//                     printf("Value not found in array.\n");
//                 }
//                 break;

//             case 6:
//                 printf("Exiting program.\n");
//                 break;

//             default:
//                 printf("Invalid choice! Try again.\n");
//         }

//     } while (choice != 6);

//     return 0;
// }



// #include <stdio.h>

// // Function to calculate sum
// int calculateSum(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[100], n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int sum = calculateSum(arr, n);
//     printf("Sum of array elements = %d\n", sum);

//     return 0;
// }


// #include <stdio.h>

// // Function to swap two numbers using pointers
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 10, y = 20;

//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(&x, &y);  // Passing addresses
//     printf("After swap: x = %d, y = %d\n", x, y);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a[10][10], b[10][10], result[10][10];
//     int r1, c1, r2, c2;

//     // Input matrix sizes
//     printf("Enter rows and columns for first matrix: ");
//     scanf("%d %d", &r1, &c1);

//     printf("Enter rows and columns for second matrix: ");
//     scanf("%d %d", &r2, &c2);

//     // Check if multiplication is possible
//     if (c1 != r2) {
//         printf("Matrix multiplication not possible!\n");
//         return 0;
//     }

//     // Input first matrix
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Input second matrix
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     // Multiply matrices
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < c1; k++) {
//                 result[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     // Display result
//     printf("Resultant matrix:\n");
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int matrix[10][10], transpose[10][10];
//     int row, col;

//     // Input matrix size
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &row, &col);

//     // Input elements
//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Transpose logic: swap rows and columns
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     // Display transposed matrix
//     printf("Transposed Matrix:\n");
//     for (int i = 0; i < col; i++) {  // Notice: rows <-> cols
//         for (int j = 0; j < row; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// // Recursive function to find factorial
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0)
//         printf("Factorial not defined for negative numbers.\n");
//     else
//         printf("Factorial of %d is: %d\n", num, factorial(num));

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// // Custom strrev function if not available in some compilers
// char* custom_strrev(char *str) {
//     int i, len = strlen(str);
//     char temp;
//     for (i = 0; i < len / 2; i++) {
//         temp = str[i];
//         str[i] = str[len - 1 - i];
//         str[len - 1 - i] = temp;
//     }
//     return str;
// }

// int main() {
//     char str1[100], str2[100];
//     int choice;

//     printf("Enter first string: ");
//     gets(str1);

//     printf("Enter second string: ");
//     gets(str2);

//     do {
//         printf("\n---- STRING FUNCTION MENU ----\n");
//         printf("1. Length of strings (strlen)\n");
//         printf("2. Concatenate strings (strcat)\n");
//         printf("3. Copy string (strcpy)\n");
//         printf("4. Compare strings (strcmp)\n");
//         printf("5. Reverse strings (strrev)\n");
//         printf("6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         getchar();  // to clear newline from input buffer

//         switch (choice) {
//             case 1:
//                 printf("Length of str1 = %lu\n", strlen(str1));
//                 printf("Length of str2 = %lu\n", strlen(str2));
//                 break;

//             case 2:
//                 strcat(str1, str2);
//                 printf("After concatenation: %s\n", str1);
//                 break;

//             case 3:
//                 strcpy(str1, str2);
//                 printf("After copying str2 to str1: %s\n", str1);
//                 break;

//             case 4:
//                 if (strcmp(str1, str2) == 0)
//                     printf("Strings are equal.\n");
//                 else
//                     printf("Strings are not equal.\n");
//                 break;

//             case 5:
//                 printf("Reversed str1: %s\n", custom_strrev(str1));
//                 printf("Reversed str2: %s\n", custom_strrev(str2));
//                 break;

//             case 6:
//                 printf("Exiting...\n");
//                 break;

//             default:
//                 printf("Invalid choice!\n");
//         }

//     } while (choice != 6);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[1000], sub[100];
//     int i, j, count = 0, str_len, sub_len;

//     printf("Enter the main string: ");
//     gets(str);

//     printf("Enter the substring to search: ");
//     gets(sub);

//     str_len = strlen(str);
//     sub_len = strlen(sub);

//     for (i = 0; i <= str_len - sub_len; i++) {
//         int found = 1;
//         for (j = 0; j < sub_len; j++) {
//             if (str[i + j] != sub[j]) {
//                 found = 0;
//                 break;
//             }
//         }
//         if (found)
//             count++;
//     }

//     printf("The substring '%s' appears %d times in the string.\n", sub, count);

//     return 0;
// }



// #include <stdio.h>

// // Recursive function to calculate sum of digits
// int sumOfDigits(int n) {
//     if (n == 0)  // Base case: if number is 0, sum is 0
//         return 0;
//     else
//         return (n % 10) + sumOfDigits(n / 10);  // Extract last digit and recurse
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Handle negative numbers
//     if (num < 0)
//         num = -num;

//     printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));

//     return 0;
// }



// #include <stdio.h>

// // Define a structure for distance
// struct Distance {
//     int feet;
//     int inches;
// };

// int main() {
//     struct Distance d1, d2, sum;

//     // Input first distance
//     printf("Enter first distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d1.feet);
//     printf("Inches: ");
//     scanf("%d", &d1.inches);

//     // Input second distance
//     printf("\nEnter second distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d2.feet);
//     printf("Inches: ");
//     scanf("%d", &d2.inches);

//     // Add feet and inches separately
//     sum.feet = d1.feet + d2.feet;
//     sum.inches = d1.inches + d2.inches;

//     // Convert inches to feet if more than 12
//     if (sum.inches >= 12) {
//         sum.feet += sum.inches / 12;
//         sum.inches = sum.inches % 12;
//     }

//     // Display result
//     printf("\nSum of distances = %d feet %d inches\n", sum.feet, sum.inches);

//     return 0;
// }


// #include <stdio.h>

// // Define a structure for complex number
// struct Complex {
//     float real;
//     float imag;
// };

// int main() {
//     struct Complex c1, c2, sum;

//     // Input first complex number
//     printf("Enter first complex number:\n");
//     printf("Real part: ");
//     scanf("%f", &c1.real);
//     printf("Imaginary part: ");
//     scanf("%f", &c1.imag);

//     // Input second complex number
//     printf("\nEnter second complex number:\n");
//     printf("Real part: ");
//     scanf("%f", &c2.real);
//     printf("Imaginary part: ");
//     scanf("%f", &c2.imag);

//     // Add real and imaginary parts separately
//     sum.real = c1.real + c2.real;
//     sum.imag = c1.imag + c2.imag;

//     // Display result
//     printf("\nSum of complex numbers = %.2f + %.2fi\n", sum.real, sum.imag);

//     return 0;
// }




// #include <stdio.h>

// // Structure definition
// struct Employee {
//     int id;
//     char name[50];
//     int age;
//     float salary;
//     char phone[2][15];  // Array within structure to store 2 phone numbers
// };

// int main() {
//     struct Employee emp[5];  // Array of structures for 5 employees

//     printf("Enter information of 5 employees:\n");

//     for (int i = 0; i < 5; i++) {
//         printf("\nEmployee %d\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);

//         printf("Name: ");
//         scanf(" %[^\n]", emp[i].name);

//         printf("Age: ");
//         scanf("%d", &emp[i].age);

//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);

//         for (int j = 0; j < 2; j++) {
//             printf("Phone number %d: ", j + 1);
//             scanf(" %[^\n]", emp[i].phone[j]);
//         }
//     }

//     // Displaying the stored information
//     printf("\n----- Employee Details -----\n");
//     for (int i = 0; i < 5; i++) {
//         printf("\nEmployee %d:\n", i + 1);
//         printf("ID: %d\n", emp[i].id);
//         printf("Name: %s\n", emp[i].name);
//         printf("Age: %d\n", emp[i].age);
//         printf("Salary: %.2f\n", emp[i].salary);
//         printf("Phone numbers: %s, %s\n", emp[i].phone[0], emp[i].phone[1]);
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

int main() {
    FILE *fptr, *fout;
    char filename[100], outputFile[] = "output.txt";
    char find[50], replace[50];
    char buffer[MAX];
    int count = 0;

    printf("Enter input file name: ");
    scanf("%s", filename);

    printf("Enter the word to find: ");
    scanf("%s", find);

    printf("Enter the word to replace it with: ");
    scanf("%s", replace);

    fptr = fopen(filename, "r");
    fout = fopen(outputFile, "w");

    if (fptr == NULL || fout == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, MAX, fptr)) {
        char *pos = buffer;
        while ((pos = strstr(pos, find)) != NULL) {
            count++;
            // Write content up to the match
            fwrite(buffer, 1, pos - buffer, fout);
            fputs(replace, fout);  // Replace word
            pos += strlen(find);
            strcpy(buffer, pos);   // Copy the remaining part
            pos = buffer;
        }
        fputs(buffer, fout);  // Write the rest (if no match)
    }

    fclose(fptr);
    fclose(fout);

    printf("\nTotal occurrences of '%s': %d\n", find, count);
    printf("Replaced content written to '%s'\n", outputFile);

    return 0;
}
