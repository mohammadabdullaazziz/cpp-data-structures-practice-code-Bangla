C++-এ স্ট্রিং কনক্যাটেনেশন (String Concatenation) বলতে দুটি বা তার বেশি স্ট্রিংকে একসাথে জোড়া লাগিয়ে একটি নতুন স্ট্রিং তৈরি করাকে বোঝায়। 
এর জন্য সবচেয়ে সহজ উপায় হলো + অপারেটর ব্যবহার করা। এছাড়া append() ফাংশন বা += অপারেটর ব্যবহার করেও স্ট্রিং যুক্ত করা যায়।
     
#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName = "Abdullah";
    string lastName = "Aziz";
    string fullName = firstName + " " + lastName; 
    cout << fullName; 
    return 0;
}

+ অপারেটর: string3 = string1 + string2;
+= অপারেটর: string1 += string2; (এটি string1-এর শেষে string2 যুক্ত করে)
append() ফাংশন: string1.append(string2);

append() ফাংশন string ক্লাসের built-in ফাংশন।      append()বড় কাজ

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a = "Hello";
    string b = " World";
    a.append(b);
    cout << a;
}

+= অপারেটর ব্যবহার করে:

#include <iostream>
#include <string>
using namespace std;
int main() {
    string a = "Hello";
    a += " World";  
    cout << a << endl;
    return 0;
}

অনেক বড় string বারবার + দিয়ে concat করলে slow হতে পারে
তখন append() বা stringstream ব্যবহার করা ভালো
---------------------------------------------------------------
C++ এ সরাসরি std::string এর সাথে নাম্বার যোগ (concatenate) করা যায় না। C++ এ স্ট্রিং হলো std::string অবজেক্ট, আর নাম্বার হলো int, float ইত্যাদি। 
C++ এই ভিন্ন ধরনের ডেটা টাইপ সরাসরি যোগ করার অনুমতি দেয় না।

std::to_string() ফাংশনটি নাম্বারকে স্ট্রিংয়ে রূপান্তর করে, তারপর সেটিকে অন্য স্ট্রিংয়ের সাথে যোগ করা যায়।
     
#include <iostream>
using namespace std;
int main(){
     string name = "Abdullah";
     int age = 25;
     string added = "Name: " + name + ", Age: " + to_string(age);
     cout << added;
     return 0;
}

এই কোডটিতে to_string(age) ব্যবহার করার প্রধান কারণ হলো ডেটা টাইপের সামঞ্জস্য বজায় রাখা। সহজ কথায়, একটি String (লেখা) এর সাথে সরাসরি একটি Integer (সংখ্যা) যোগ করা যায় না।
C++ এ যখন + চিহ্ন ব্যবহার করে একাধিক জিনিস জোড়া লাগানো হবে, তখন সবগুলোকে String হতে হয়।

এখানে "Name: " এবং name দুটিই স্ট্রিং।

কিন্তু age হলো একটি Integer (int)।
একটি স্ট্রিংয়ের সাথে সরাসরি ইন্টিজার যোগ করতে গেলে কম্পাইলার ভুল (Error) দেখাবে।
     
to_string() ফাংশনটি মূলত কোনো সংখ্যাকে (int, float, double) স্ট্রিংয়ে রূপান্তর করে।

age = 25; এটি একটি সংখ্যা।

to_string(25) করার পর এটি "25" (একটি লেখা) হয়ে যায়।

string added = "Name: " + name + ", Age: " + to_string(age);

"Name: " (String) + "Abdullah" (String) = "Name: Abdullah"

তার সাথে যোগ হচ্ছে ", Age: " (String)।

সবশেষে to_string(25) এর মাধ্যমে সংখ্যাটি স্ট্রিং "25" হয়ে যোগ হচ্ছে।

ফলাফল দাঁড়ালো: "Name: Abdullah, Age: 25"
