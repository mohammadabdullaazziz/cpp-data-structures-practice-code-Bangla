#include <iostream>
using namespace std;
int main(){
     
     return 0;
}

C++ এ অপারেটর হলো বিশেষ চিহ্ন যা ডাটা বা ভেরিয়েবলের ওপর গাণিতিক বা লজিক্যাল কাজ করে। 
Unary Operator শুধুমাত্র একটি অপারেন্ডের (operand) ওপর কাজ করে (যেমন: ++a, -b)। Binary Operator দুটি অপারেন্ডের মধ্যে কাজ করে (যেমন: a + b, x * y)। এগুলো ডেটা প্রসেসিংয়ে অপরিহার্য।
Unary operator → একটিতে কাজ করে
Binary operator → দুইটিতে কাজ করে

সবচেয়ে বেশি ব্যবহৃত ইউনারি অপারেটর।

Increment (++): অপার্যান্ডের মান ১ বাড়িয়ে দেয়।

Decrement (--): অপার্যান্ডের মান ১ কমিয়ে দেয়।

Unary Plus (+) এবং Unary Minus (-)

Unary Plus (+): এটি মূলত সংখ্যার পজিটিভ মান বোঝায় (যদিও এটি না দিলেও সংখ্যা পজিটিভ থাকে)। যেমন: +5

Unary Minus (-): এটি কোনো পজিটিভ সংখ্যাকে নেগেটিভ বা নেগেটিভকে পজিটিভ করে দেয়।

উদাহরণ: যদি a = 5 হয়, তবে -a এর মান হবে -5।

👉 Unary operator একটিমাত্র operand (variable/value) এর উপর কাজ করে।

int a = 5;
++a;   // a = 6

int a = 5;
-a;     // Unary minus → -5
!a;     // Logical NOT
&a;     // Address

C++ ল্যাঙ্গুয়েজে Unary Minus (-) অপারেটর মূলত একটি সংখ্যার বা ভ্যারিয়েবলের মানকে ঋণাত্মক (negative) বা তার বিপরীত চিহ্নে রূপান্তর করতে কাজ করে।
এটি একটি মাত্র অপারেন্ড (operand) এর উপর কাজ করে।

মান উল্টে দেওয়া: যদি একটি ভ্যারিয়েবলের মান ধনাত্মক (+) থাকে, তবে unary minus তা ঋণাত্মক (-) করে দেয়।
বিপরীত করা: যদি ভ্যারিয়েবলের মান ইতিমধ্যেই ঋণাত্মক (-) থাকে, তবে unary minus তা ধনাত্মক (+) করে দেয়।
     
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = -a; // Unary - অপারেটর ব্যবহার
    int c = -b; // -(-10) = 10

    cout << "Original a: " << a << endl; // আউটপুট: 10
    cout << "Unary -a: " << b << endl;   // আউটপুট: -10
    cout << "Unary -b: " << c << endl;   // আউটপুট: 10
    return 0;
}



👉 Binary operator দুইটি operand এর উপর কাজ করে।

int a = 5, b = 3;
int c = a + b;  // c = 8

a - b;
a * b;
a > b;
a && b;

C++ এ Operand (অপের্যান্ড) বলতে ভেরিয়েবল (Variable) এবং ভ্যালু (Value/Constant) উভয়ই হতে পারে।
     
int x = 10;
int y = 20;
int sum = x + y; // এখানে x এবং y হলো operand
int total = x + 5; // এখানে x (variable) এবং 5 (value) হলো operand


C++-এ Binary operator মানে এমন operator যা দুটি operand (value/variable) নিয়ে কাজ করে।

Arithmetic Binary Operator

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;

    cout << a + b << endl;  // 15
    cout << a - b << endl;  // 5
    cout << a * b << endl;  // 50
    cout << a / b << endl;  // 2

    return 0;
}

Relational Binary Operator

#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 20;
    cout << (a < b) << endl;   // 1 (true)
    cout << (a == b) << endl;  // 0 (false)

    return 0;
}

Logical Binary Operator

#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10;
    if (a < 10 && b > 5) {
        cout << "Condition True";
    }

    return 0;
}

Assignment Binary Operator

#include <iostream>
using namespace std;
int main() {
    int a = 5;
    a += 3;  // a = a + 3 → 8

    cout << a;

    return 0;
}

Bitwise Binary Operator:

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    cout << (a & b) << endl;  // AND
    cout << (a | b) << endl;  // OR

    return 0;
}

👉 Binary operator সবসময় ২টি operand নিয়ে কাজ করে
a + b
a > b
a && b
