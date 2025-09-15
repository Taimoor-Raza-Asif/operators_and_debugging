#include<iostream>
using namespace std;
int main(){

// Example 1
int x = 5;
cout << (x++)++;
// Explanation: Error: (x++) is a temporary (rvalue), not a modifiable variable.




// Example 2
int y = 10;
++++y;
// Explanation: Error: Looks like “double increment”, but it’s parsed as ++(++y). You cannot increment the result of another increment.



// Example 3
int z = 3;
--(z+1);
// Explanation: Error: (z+1) is an expression, not a variable.



// Example 4
int a = 7;
int b = ++a++++;
// Explanation: Error: Ambiguous ++a++++ (parser confusion between pre/post increments).



// Example 5
int n = 4;
cout << n+++++n;
// Explanation: Error: Too many + → compiler cannot decide between increment and addition.



// Example 6
int m = 5;
++5;
// Explantion: Error: Cannot increment a constant literal.



// Example 7
int p = 2, q = 3;
cout << (p+++q);
// Explanation: Error: Ambiguity in parsing → compiler struggles between (p++ + q) and (p + ++q).




// Example 8
int r = 2;
cout << ++(r*3);
// Explanation: Error: (r*3) is an expression, not a variable.





// Example 9
const int c = 10;
c++;
// Explanation: Error: Cannot modify a constant variable.



return 0;
}
