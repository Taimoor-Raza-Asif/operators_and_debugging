#include<iostream>
using namespace std;
int main(){

// Examples of errors and debugging with logical operators without using if-else statements

// Example 1: Incorrect use of logical operators
int x = 5;
bool result1 = (x > 0) && (x < 10; // Missing closing parenthesis
cout << "Result 1: " << result1 << endl;



// Example 2: Misuse of logical operators
int y = 15;
bool result2 = (y > 10) || (y < 5) && (y != 15); // Incorrect precedence without parentheses
cout << "Result 2: " << result2 << endl;



// Example 3: Using assignment operator instead of comparison operator
int z = 20;
bool result3 = z = 20; // Incorrect use of assignment operator
cout << "Result 3: " << result3 << endl;



// Example 4: Negating a non-boolean expression
int a = 10;
bool result4 = !a; // Negating an integer instead of a boolean
cout << "Result 4: " << result4 << endl;



// Example 5: Logical operator with incompatible types
int b = 5;
bool result5 = (b > 0) && "Hello"; // Incompatible types
cout << "Result 5: " << result5 << endl;


return 0;
}