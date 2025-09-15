#include<iostream>
using namespace std;
int main(){


    
// Example 1 – Missing :
    int a = 10, b = 20;
    int max = (a > b) ? a ; // Error: Missing ':' in the ternary operator
    cout << "The maximum value is: " << max << endl;



// Example 2 – Incompatible Types
    int num = 15;
    string result = (num % 2 == 0) ? "Even" : 1; // Error: Incompatible types in the ternary operator
    cout << num << " is " << result << endl;



// Example 3 – Nested Ternary without Parentheses
    int number = -5;
    string check = number > 0 ? "Positive" : number < 0 ? "Negative" : "Zero"; // Error: Ambiguous without parentheses
    cout << number << " is " << check << endl;



// Example 4 – Using Ternary in a Void Context
    int score = 85;
    (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 50) ? 'D' : 'F'; // Error: Ternary operator used in a void context
    cout << "The grade is: " << score << endl;



// Example 5 – Incorrect Use of Logical Operators
    char character = 'E';
    string check_vowel = (character == 'a' || 'e' || 'i' || 'o' || 'u') ? "Vowel" : "Consonant"; // Error: Incorrect use of logical operators
    cout << character << " is a " << check_vowel << endl;


// Example 6 – Ternary with Side Effects
    int num2 = -10;
    int absolute = (num2 < 0) ? (num2 = -num2) : num2; // Warning: this will cause issue i.e. num2 will be changed and absolute will always be positive
    cout << "The absolute value is: " << absolute << endl;


    return 0;
}

