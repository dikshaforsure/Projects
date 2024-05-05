#include <cmath>
#include <iostream>
using namespace std;
// To calculate factorial
int factorial(int n) {
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main() {
  cout << "Hello  user! Make your calculations easyy.\n Press any key to "
          "continue\n";

  char op;
  float num1, num2;

  cout << "Enter any operator (+, -, *, /, s, c, t, l, r, f): ";
  cin >> op;

  switch (op) {
  case '+':
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2;
    break;
  case '-':
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Subtraction: " << num1 - num2;
    break;
  case '*':
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Multiplication: " << num1 * num2;
    break;
  case '/':
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0)
      cout << "Division: " << num1 / num2;
    else
      cout << "Error!";
    break;
  case 's':
    cout << "Enter the angle in degrees: ";
    cin >> num1;
    cout << "Result: " << sin(num1 * M_PI / 180);
    break;
  case 'c':
    cout << "Enter the angle in degrees: ";
    cin >> num1;
    cout << "Result: " << cos(num1 * M_PI / 180);
    break;
  case 't':
    cout << "Enter the angle in degrees: ";
    cin >> num1;
    cout << "Result: " << tan(num1 * M_PI / 180);
    break;
  case 'l':
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Logarithmic value: " << log(num1); // log with base e
    break;
  case 'r':
    cout << "Enter the number: ";
    cin >> num1;
    if (num1 >= 0)
      cout << "Square root: " << sqrt(num1);
    else
      cout << "Error! Cannot compute square root of a negative number.";
    break;
  case 'f':
    cout << "Enter the number: ";
    cin >> num1;
    if (num1 >= 0)
      cout << "Factorial: " << factorial(num1);
    else
      cout << "Error! Factorial is defined only for non-negative integers.";
    break;
  default:
    cout << "Invalid operator!";
    break;
    cout << "Thank you for using our calculator";
  }

  return 0;
}
