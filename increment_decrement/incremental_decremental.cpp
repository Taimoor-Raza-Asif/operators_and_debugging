#include <iostream>
using namespace std;

int main(){


// Incremental and Decremental Operators


// // exmple 1
int n = 10;
// cout << "n" << n << endl;
// cout << "n++" << n++ << endl; // first prints 10, then n becomes 11
// cout << "++n" << ++n << endl; // first n becomes 12, then prints 12
// cout << "n--" << n-- << endl; // first prints 12, then n becomes 11
// cout << "--n" << --n << endl; // first n becomes 10, then prints 10


// // example 2
// int a = 5;
// int b = 3;
// int c = a++ + ++b; // c = 5 + 4 = 9, a becomes 6, b becomes 4
// cout << "a: " << a << ", b: " << b << ", c: " << c << endl;




// // example 3
// int x = 7;
// int y = x-- - --x; // y = 7 - 5 = 2, x becomes 5
// cout << "x: " << x << ", y: " << y << endl;




//  // example 4
// int p = 4;
// int q = 2;
// int r = ++p + p++ + --q + q--; // r = 5 + 5 + 1 + 1 = 12, p becomes 6, q becomes 1
// cout << "p: " << p << ", q: " << q << ", r: " << r << endl;





// // example 5
// int m = 3;
// int n2 = 6;
// int o = m++ * --n2 + ++m - n2--; // o = 3 * 5 + 5 - 5 = 15 + 5 - 5 = 15, m becomes 6, n2 becomes 5
// cout << "m: " << m << ", n2: " << n2 << ", o: " << o << endl;





// // loops example 1
// cout << "Loop using incremental operator:" << endl;
// for(int i = 0; i < 5; i++){
//     cout << i << " ";
// }
// cout << endl;





// // loops example 2
// cout << "Loop using decremental operator:" << endl;
// for(int j = 5; j > 0; j--){
//     cout << j << " ";
// }
// cout << endl;




// // loops example 3
// cout << "Complex loop using both operators:" << endl;
// for(int k = 0, l = 10; k < 5 && l > 5; k++, l--){
//     cout << "k: " << k << ", l: " << l << endl;

// }



// // loops exmaple 4
// cout << "Nested loop :" << endl;
// for(int m = 0; m < 3; m++){
//     for(int n = 0; n < 2; n++){
//         int val = m++ + ++n + --m + n--; // complex expression
//         cout << "m: " << m << ", n: " << n << ", val: " << val << endl;
//     }
// }



// m+=1, m++ , and m= m+1 are same when used alone
// int m = 5;

// // All look same:
// m = m + 1;   // m = 6
// m += 1;      // m = 7
// m++;         // m = 8

// // BUT inside expression:
// int x = 10, y;
// y = x++ + 5;   // y = 15, x = 11
// y = ++x + 5;   // y = 17, x = 12


    return 0;
}