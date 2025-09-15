#include<iostream>
using namespace std;
int main(){



// Example 1: Check if a number is within a specific range
int num = 15;
bool isInRange = (num > 10) && (num < 20);
cout << "Is the number within the range? " << isInRange << endl;



// Example 2: Check if a character is a vowel
char ch = 'e';
bool isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'
|| ch == 'u');
cout << "Is the character a vowel? " << isVowel << endl;



// Example 3: Check if a number is either negative or greater than 100
int num = 150;
bool isNegativeOrLarge = (num < 0) || (num > 100);
cout << "Is the number negative or greater than 100? " << isNegativeOrLarge << endl;



// Example 4: Check if a person is eligible to vote (age >= 18)
int age = 25;
bool isEligibleToVote = (age >= 18);
cout << "Is the person eligible to vote? " << isEligibleToVote << endl;



// Example 5: Check if a number is even and positive
int num = 10;
bool isEvenAndPositive = (num % 2 == 0) && (num > 0);
cout << "Is the number even and positive? " << isEvenAndPositive << endl;



// Example 6: negate a boolean value
bool isTrue = true;
bool negatedValue = !isTrue;
cout << "Negated value: " << negatedValue << endl;



// Example 7: Check if a character is not a digit
char ch = 'a';
bool isNotDigit = !isdigit(ch);

cout << "Is the character not a digit? " << isNotDigit << endl;

// 



return 0;
}




// #include<iostream>
// using namespace std;
// int main(){



// return 0;
// }