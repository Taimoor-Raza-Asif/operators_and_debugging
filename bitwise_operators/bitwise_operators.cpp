#include <iostream> // Essential for console input/output (cout)

// Use the standard namespace to avoid prefixing with "std::"
using namespace std;

// Define a constant for the number of bits to display for clarity.
const int BITS = 8;

/**
 * @brief Prints the binary representation of an integer.
 * @param n The number to print in binary.
 * @param num_bits The number of bits to display.
 */
void printBinary(int n, int num_bits) {
    // Iterate from the most significant bit to the least significant bit.
    for (int i = num_bits - 1; i >= 0; i--) {
        // Right shift the number 'i' times to bring the bit we want to the far right.
        // Then, use AND with 1 to isolate that single bit.
        int bit = (n >> i) & 1;
        cout << bit;
    }
}


int main() {
    cout << "--- Bitwise Operator Examples in C++ ---\n" << endl;

    //====================================================================
    // Example 1: Bitwise AND (&) - Basic
    // The AND operator returns 1 only if both corresponding bits are 1.
    //====================================================================
    cout << "--- Example 1: Bitwise AND (&) ---" << endl;
    int a = 12;  // Binary: 00001100
    int b = 10;  // Binary: 00001010
    int result_and = a & b; // Result should be 00001000 (8)

    //   00001100 (12)
    // & 00001010 (10)
    // ------------
    //   00001000 (8)

    cout << "a           = " << a << "\t | Binary: "; printBinary(a, BITS); cout << endl;
    cout << "b           = " << b << "\t | Binary: "; printBinary(b, BITS); cout << endl;
    cout << "a & b       = " << result_and << "\t | Binary: "; printBinary(result_and, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 2: Bitwise OR (|) - Basic
    // The OR operator returns 1 if at least one of the corresponding bits is 1.
    //====================================================================
    cout << "--- Example 2: Bitwise OR (|) ---" << endl;
    a = 12; // Binary: 00001100
    b = 10; // Binary: 00001010
    int result_or = a | b; // Result should be 00001110 (14)

    //   00001100 (12)
    // | 00001010 (10)
    // ------------
    //   00001110 (14)

    cout << "a           = " << a << "\t | Binary: "; printBinary(a, BITS); cout << endl;
    cout << "b           = " << b << "\t | Binary: "; printBinary(b, BITS); cout << endl;
    cout << "a | b       = " << result_or << "\t | Binary: "; printBinary(result_or, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 3: Bitwise XOR (^) - Basic
    // The XOR (exclusive OR) operator returns 1 if the corresponding bits are different.
    //====================================================================
    cout << "--- Example 3: Bitwise XOR (^) ---" << endl;
    a = 12; // Binary: 00001100
    b = 10; // Binary: 00001010
    int result_xor = a ^ b; // Result should be 00000110 (6)

    //   00001100 (12)
    // ^ 00001010 (10)
    // ------------
    //   00000110 (6)

    cout << "a           = " << a << "\t | Binary: "; printBinary(a, BITS); cout << endl;
    cout << "b           = " << b << "\t | Binary: "; printBinary(b, BITS); cout << endl;
    cout << "a ^ b       = " << result_xor << "\t | Binary: "; printBinary(result_xor, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 4: Bitwise NOT (~) - Basic
    // The NOT operator inverts all the bits of its operand.
    // Note: It produces a negative number due to two's complement representation.
    //====================================================================
    cout << "--- Example 4: Bitwise NOT (~) ---" << endl;
    unsigned char c = 12; // Binary: 00001100 (Using unsigned char for 8 bits)
    int result_not = ~c;  // Result should be 11110011 (-13 in two's complement)

    // ~ 00001100 (12)
    // ------------
    //   11110011 (-13)

    cout << "c           = " << (int)c << "\t | Binary: "; printBinary(c, BITS); cout << endl;
    cout << "~c          = " << result_not << "\t | Binary: "; printBinary(result_not, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 5: Left Shift (<<) - Basic
    // Shifts bits to the left, equivalent to multiplication by 2^n.
    //====================================================================
    cout << "--- Example 5: Left Shift (<<) ---" << endl;
    int d = 13; // Binary: 00001101
    int result_lshift = d << 2; // Shift left by 2 bits. Result: 00110100 (52)
                                // 13 * 2^2 = 13 * 4 = 52

    cout << "d           = " << d << "\t | Binary: "; printBinary(d, BITS); cout << endl;
    cout << "d << 2      = " << result_lshift << "\t | Binary: "; printBinary(result_lshift, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 6: Right Shift (>>) - Basic
    // Shifts bits to the right, equivalent to integer division by 2^n.
    //====================================================================
    cout << "--- Example 6: Right Shift (>>) ---" << endl;
    int e = 40; // Binary: 00101000
    int result_rshift = e >> 3; // Shift right by 3 bits. Result: 00000101 (5)
                                // 40 / 2^3 = 40 / 8 = 5

    cout << "e           = " << e << "\t | Binary: "; printBinary(e, BITS); cout << endl;
    cout << "e >> 3      = " << result_rshift << "\t | Binary: "; printBinary(result_rshift, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 7: Checking for Even or Odd - Intermediate
    // A number is odd if its least significant bit (LSB) is 1.
    //====================================================================
    cout << "--- Example 7: Check for Even or Odd ---" << endl;
    int num_odd = 27;  // 00011011
    int num_even = 50; // 00110010

    cout << num_odd << " is " << ((num_odd & 1) ? "Odd" : "Even") << endl;
    cout << num_even << " is " << ((num_even & 1) ? "Odd" : "Even") << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 8: Swapping Two Numbers without a Temp Variable - Intermediate
    // The XOR operator can be used to swap two numbers.
    //====================================================================
    cout << "--- Example 8: Swap two numbers with XOR ---" << endl;
    int x = 15; // 00001111
    int y = 9;  // 00001001
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    x = x ^ y; // x becomes 15 ^ 9 = 6
    y = x ^ y; // y becomes 6 ^ 9 = 15
    x = x ^ y; // x becomes 6 ^ 15 = 9

    cout << "After swap:  x = " << x << ", y = " << y << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 9: Setting and Clearing a Specific Bit - Intermediate
    // Common for manipulating flags or in hardware programming.
    //====================================================================
    cout << "--- Example 9: Set and Clear a Specific Bit ---" << endl;
    unsigned char flags = 34; // 00100010
    cout << "Initial flags: " << (int)flags << " | "; printBinary(flags, BITS); cout << endl;

    // To SET a bit, we use OR with a mask (1 at the desired position).
    // Set the 3rd bit (index 2). Mask = 1 << 2 => 00000100
    int mask_set = 1 << 2;
    flags = flags | mask_set;
    cout << "After setting bit 2: " << (int)flags << " | "; printBinary(flags, BITS); cout << endl;

    // To CLEAR a bit, we use AND with an inverted mask.
    // Clear the 6th bit (index 5). Mask = ~(1 << 5) => ~(00100000) => 11011111
    int mask_clear = ~(1 << 5);
    flags = flags & mask_clear;
    cout << "After clearing bit 5:  " << (int)flags << " | "; printBinary(flags, BITS); cout << endl;
    cout << "--------------------------------------\n" << endl;

    //====================================================================
    // Example 10: Checking if a Specific Bit is Set - Intermediate
    // Use AND with a mask to check if a bit is 1.
    //====================================================================
    cout << "--- Example 10: Check if a Specific Bit is Set ---" << endl;
    int value = 42; // Binary: 00101010
    cout << "Value = " << value << " | "; printBinary(value, BITS); cout << endl;

    // Check if the 2nd bit (index 1) is set. Mask = 1 << 1 => 00000010
    int bit_to_check = 1;
    int mask_check = 1 << bit_to_check;
    bool is_set = (value & mask_check) != 0;
    cout << "Is bit " << bit_to_check << " set? " << (is_set ? "Yes" : "No") << endl;

    // Check if the 3rd bit (index 2) is set. Mask = 1 << 2 => 00000100
    bit_to_check = 2;
    mask_check = 1 << bit_to_check;
    is_set = (value & mask_check) != 0;
    cout << "Is bit " << bit_to_check << " set? " << (is_set ? "Yes" : "No") << endl;
    cout << "--------------------------------------\n" << endl;

    return 0;
}