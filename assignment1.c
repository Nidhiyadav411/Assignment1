#include <stdio.h>
int main() {
 int x;
 printf("Electric Switch Simulator\n");
 printf("Enter 0 to turn switch OFF or enter 1 to turn switch ON\n");
 scanf("%d", &x);
 if (x == 1) {
 printf("Switch ON\n");
 int choice, a, b;
 printf("Select your choice:\n");
 printf("1 - Add\n");
 printf("2 - Subtract\n");
 printf("3 - Multiply\n");
 printf("4 - Divide\n");
 printf("5 - Modulus\n");
 
 printf("Enter number a: ");
 scanf("%d", &a);
 printf("Enter number b: ");
 scanf("%d", &b);
 
 printf("Enter your choice: ");
 scanf("%d", &choice);
 
 switch (choice) {
 case 1:
 printf("Addition of a and b: %d\n", (a + b));
 break;
 case 2:
 printf("Subtraction of a and b: %d\n", (a - b));
 break;
 case 3:
 printf("Multiplication of a and b: %d\n", (a * b));
 break;
 case 4:
 if (b != 0) {
 printf("Division of a and b: %d\n", (a / b));
 } else {
 printf("Error: Division by zero.\n");
 }
 break;
 case 5:
 if (b != 0) {
 printf("Modulus of a and b: %d\n", (a % b));
 } else {
 printf("Error: Modulus by zero.\n");
 }
 break;
 default:
 printf("Wrong choice.\n");
 break;
 }
 } else if (x == 0) {
 printf("SORRY, the calculator is not on.\n");
 } else {
 printf("Invalid input. Please enter 0 or 1.\n");
 }
 return 0;
}