// A C++ file with 6 SIMPLE, common bitwise errors.
// No heavy concepts, just the basics.

#include <iostream>
#include <cmath> // For the pow() function in the last example

using namespace std;

/**
 * @brief A simple helper function to show us what numbers look like in binary.
 * This makes it much easier to see what's going on.
 */
void printBinary(int n) {
    // We'll just show 8 bits for simplicity
    for (int i = 7; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
}

int main() {
    cout << "--- Simple Bitwise Errors and Debugging ---" << endl;
    cout << "Enable examples by changing '#if 0' to '#if 1' in the code.\n" << endl;


    //===== Mistake #1: Mixing up Bitwise AND (&) with Logical AND (&&) =====
#if 0
    // THE PROBLEM: Using `&&` (is it true?) when you want to check bits with `&`.
    int a = 5; // Binary: 00000101
    int b = 2; // Binary: 00000010

    cout << "a = "; printBinary(a); cout << endl;
    cout << "b = "; printBinary(b); cout << endl;

    // WHY IT'S WRONG:
    // `&&` checks if both numbers are non-zero. Since 5 is not zero (true) and 2 is not zero (true),
    // the result of `a && b` is `true`, which C++ treats as the number 1.
    if (a && b) {
        cout << "Buggy `a && b`: This code runs, but it's not checking the bits!" << endl;
    }

    // THE FIX:
    // Use `&` to see which bits they have in common.
    //   00000101 (a)
    // & 00000010 (b)
    // ----------
    //   00000000 (result is 0, which is false)
    if (a & b) {
        cout << "Correct `a & b`: This code runs." << endl;
    } else {
        cout << "Correct `a & b`: This code does NOT run, because they share no 'on' bits." << endl;
    }
#endif


    //===== Mistake #2: Mixing up Bitwise OR (|) with Logical OR (||) =====
#if 0
    // THE PROBLEM: Using `||` when you want to combine bits with `|`.
    int a = 5; // Binary: 00000101
    int b = 2; // Binary: 00000010

    // WHY IT'S WRONG:
    // `||` checks if at least one number is non-zero. 5 is not zero, so the result is `true` (which is 1).
    // You lose all the original bit information.
    int buggy_result = a || b;
    cout << "Buggy `a || b` Result: " << buggy_result << endl; // Prints 1

    // THE FIX:
    // Use `|` to combine the 'on' bits from both numbers.
    //   00000101 (a)
    // | 00000010 (b)
    // ----------
    //   00000111 (result is 7)
    int correct_result = a | b;
    cout << "Correct `a | b` Result: " << correct_result << endl; // Prints 7
#endif


    //===== Mistake #3: Using AND (&) When You Mean to Turn a Bit ON =====
#if 0
    // THE PROBLEM: You want to turn a specific bit ON, but you use `&` instead of `|`.
    int flags = 10;           // Binary: 00001010
    int MASK_TO_TURN_ON = 4;  // Binary: 00000100 -> We want to turn this bit on in 'flags'.

    cout << "Original flags: "; printBinary(flags); cout << endl;

    // WHY IT'S WRONG:
    // The `&` operator can only turn bits OFF. If a bit is 0 in the mask, it will be 0 in the result.
    // You can't use it to turn a 0 into a 1.
    flags &= MASK_TO_TURN_ON; // This is the same as flags = flags & MASK_TO_TURN_ON
    cout << "Buggy result:   "; printBinary(flags); cout << " (This is 0!)" << endl;

    // THE FIX:
    // Use `|` to turn a bit ON. It keeps all the existing bits and adds the new one.
    flags = 10; // Reset to original value
    flags |= MASK_TO_TURN_ON; // This is the same as flags = flags | MASK_TO_TURN_ON
    cout << "Correct result: "; printBinary(flags); cout << " (This is 14)" << endl;
#endif


    //===== Mistake #4: Doing an Operation But Not Saving the Result =====
#if 0
    // THE PROBLEM: You do a bitwise calculation, but forget to assign the result back to the variable.
    int my_number = 9; // Binary: 00001001

    cout << "my_number starts as: " << my_number << " -> "; printBinary(my_number); cout << endl;

    // WHY IT'S WRONG:
    // This line calculates `9 | 2` (which is 11), but then the result is thrown away.
    // The original `my_number` variable is never changed.
    my_number | 2;

    cout << "my_number is now:    " << my_number << " -> "; printBinary(my_number); cout << " (Still 9!)" << endl;

    // THE FIX:
    // Assign the result back to the variable.
    my_number = my_number | 2;
    // Or even better, use the shorthand `|=` operator.
    // my_number |= 2;
    cout << "my_number is finally: " << my_number << " -> "; printBinary(my_number); cout << " (Now it's 11!)" << endl;
#endif


    //===== Mistake #5: The Parentheses Problem (Operator Precedence) =====
#if 0
    // THE PROBLEM: Mixing `&` or `|` with `==` or `!=` can confuse the compiler if you don't use parentheses.
    int value = 4; // Binary: 00000100
    int mask = 4;  // Binary: 00000100

    // WHY IT'S WRONG:
    // C++ does the `==` part FIRST. So `mask == value` becomes `4 == 4`, which is `true` (or 1).
    // The check then becomes `if (value & 1)`, which is `4 & 1`, which is `0` (false). The logic is backwards!
    if (value & mask == value) {
        cout << "Buggy: This should run, but it doesn't." << endl;
    } else {
        cout << "Buggy: We ended up here by mistake." << endl;
    }

    // THE FIX:
    // Simple rule: ALWAYS wrap your bitwise operations in parentheses `()` when mixing them.
    // This forces the computer to do the `&` part first, just like you wanted.
    if ((value & mask) == value) {
        cout << "Correct: The parentheses fixed it!" << endl;
    }
#endif


    //===== Mistake #6: Thinking XOR (^) is for "Power Of" =====
#if 0
    // THE PROBLEM: In many calculators and other languages, `^` means "to the power of". In C++, it's Bitwise XOR.
    int number = 3 ^ 2; // You might think this is 3*3 = 9.

    // WHY IT'S WRONG:
    // `^` (XOR) compares bits. A result bit is 1 only if the input bits are DIFFERENT.
    //   00000011 (3)
    // ^ 00000010 (2)
    // ----------
    //   00000001 (result is 1)
    cout << "Buggy `3 ^ 2` result: " << number << endl; // Prints 1, not 9.

    // THE FIX:
    // This is a knowledge mistake. To do powers in C++, you need to include the `<cmath>` library
    // and use the `pow()` function.
    int correct_power = pow(3, 2);
    cout << "Correct `pow(3, 2)` result: " << correct_power << endl; // Prints 9
#endif

    cout << "\nAll examples checked." << endl;

    return 0;
}