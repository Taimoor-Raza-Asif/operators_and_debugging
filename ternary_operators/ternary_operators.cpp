#include<iostream>
using namespace std;
int main(){

// Example 1 find the maximum value between two numbers
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Ternary operator to find the maximum
    cout << "The maximum value is: " << max << endl;





// Example 2 find even or odd

    int num = 15;
    string result = (num % 2 == 0) ? "Even" : "Odd"; // Ternary operator to check even or odd
    cout << num << " is " << result << endl;





// Example 3 check if a number is positive, negative or zero

    int number = -5;
    string check = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero"; // Nested ternary operator
    cout << number << " is " << check << endl;





// Example 4 assign grade based on score

    int score = 85; 
    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 50) ? 'D' : 'F'; // Nested ternary operator for grading
    cout << "The grade is: " << grade << endl;





// Example 5 check if a character is a vowel or consonant

    char character = 'E';
    string check_vowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') ? "Vowel" : "Consonant"; // Ternary operator to check vowel or consonant
    cout << character << " is a " << check_vowel << endl;





// Example 6 find the absolute value of a number

    int num = -10;
    int absolute = (num < 0) ? -num : num; // Ternary operator to find absolute value       
    cout << "The absolute value is: " << absolute << endl;





// Example 7 check if a year is a leap year
    int year = 2020;
    string check_leap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Leap Year" : "Not a Leap Year"; // Ternary operator to check leap year
    cout << year << " is a " << check_leap << endl;





// Example 8 find the minimum value between three numbers

    int x = 5, y = 10, z = 3;
    int min = (x < y) ? (x < z ? x : z) : (y < z ? y : z); // Nested ternary operator to find the minimum
    cout << "The minimum value is: " << min << endl;
    

    return 0;
}