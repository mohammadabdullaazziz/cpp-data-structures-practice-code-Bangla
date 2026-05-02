#include <iostream>
using namespace std;
int main(){

   int num;
   cout << "Enter Your Number: ";
   cin >> num;
   cout << "You entered: " << num <<endl;

   int a, b, sum;
   cout << "Type a Number: ";
   cin >> a ;
   cout << "Type another Number: ";
   cin >> b;
   sum = a + b;
   cout << "Sum is:" <<sum <<endl;

   string name;
   int age;
   cout << "Enter Your Name: ";
   getline(cin, name);
   cout << "Enter Your Age: ";
   cin >> age;
   cout << "Hello " << name << ", your age is " << age <<endl;

   int length, width;
   cout << "Enter your length: ";
   cin >> length;
   cout << "Enter your width: ";
   cin >> width;
   cout << "Area = " << length * width <<endl;

   int a, b, c;
   float average;
   cout << "1st Person: ";
   cin >> a;
   cout << "2nd Person: ";
   cin >> b;
   cout << "3rd Person: ";
   cin >> c;
   average = (a + b + c) / 3.0;
   cout << "Average = " << average <<endl;
   
   bool isRaining;
   cout << "Is it raining ? (1 Yes, 0 No): ";
   cin >> isRaining;
   cout << "Is it raining: " <<isRaining <<endl;
   return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int x, y, sum;
    cout<< "Type a number: ";
    cin>> x;
    cout<< "Type another number: ";
    cin>> y;
    sum = x + y;
    cout<< "Type first number: " << x <<endl << "And Type second number: " << y <<endl << "Sum is: " << sum <<endl;
    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার ফাংশন
void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height: ";
    cin >> height;

    // cin >> এর পর getline থাকলে বাফার ক্লিয়ার করা বাধ্যতামূলক
    clearInputBuffer();

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    clearInputBuffer();

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Are you married (1 for Yes, 0 for No): ";
    cin >> married;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    clearInputBuffer();

    // --- আউটপুট প্রেজেন্টেশন ---
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    // গ্লোবাল আউটপুট ফরম্যাটিং
    cout << left << boolalpha;

    cout << setw(COL_WIDTH) << "Name"              << ": " << name << endl;
    cout << setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << endl;
    cout << setw(COL_WIDTH) << "Height"            << ": " << fixed << setprecision(1) << height << " ft" << endl;
    cout << setw(COL_WIDTH) << "Village"           << ": " << village << endl;
    cout << setw(COL_WIDTH) << "Subject"           << ": " << subject << endl;
    cout << setw(COL_WIDTH) << "Account Balance"    << ": $" << fixed << setprecision(2) << accountBalance << endl;
    cout << setw(COL_WIDTH) << "Gmail"             << ": " << gmail << endl;
    cout << setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << endl;
    cout << setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << endl;
    cout << setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << endl;
    cout << setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << endl;
    cout << setw(COL_WIDTH) << "Grade"             << ": " << grade << endl;
    cout << setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << endl;
    cout << setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}






#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
// প্রফেশনাল উইডথ ম্যানেজমেন্ট
const int COL_WIDTH = 25;

// ইনপুট বাফার এবং এরর স্টেট পরিষ্কার করার স্ট্যান্ডার্ড ফাংশন
void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    // ভেরিয়েবল ডিক্লেয়ারেশন
    string name, village, subject, gmail, phoneNumber, bloodGroup;
    const string COUNTRY = "Bangladesh";

    int age;
    char grade;
    double height; 
    double accountBalance;
    bool isPassed, isGraduated, married;

    // --- ইউজার ইনপুট অংশ ---

    cout << "Enter your name: ";
    getline(cin, name);

    // বয়স ইনপুট ভ্যালিডেশন
    cout << "Enter your age: ";
    while (!(cin >> age)) { 
        cout << "Invalid input! Please enter a numeric age: ";
        clearInputBuffer();
    }

    cout << "Enter your height: ";
    while (!(cin >> height)) {
        cout << "Invalid input! Please enter height in numbers: ";
        clearInputBuffer();
    }

    // getline এর আগে বাফার ক্লিয়ার করা বাধ্যতামূলক
    clearInputBuffer();

    cout << "Enter your village: ";
    getline(cin, village);

    cout << "Enter your subject: ";
    getline(cin, subject);

    cout << "Enter your account balance: ";
    while (!(cin >> accountBalance)) {
        cout << "Invalid input! Please enter balance in numbers: ";
        clearInputBuffer();
    }

    clearInputBuffer();

    cout << "Enter your gmail: ";
    getline(cin, gmail);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your blood group: ";
    getline(cin, bloodGroup);

    cout << "Are you married (1 for Yes, 0 for No): ";
    while (!(cin >> married)) {
        cout << "Invalid! Enter 1 for Yes or 0 for No: ";
        clearInputBuffer();
    }

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you passed (1 for true, 0 for false): ";
    cin >> isPassed;

    cout << "Are you graduated (1 for true, 0 for false): ";
    cin >> isGraduated;

    clearInputBuffer();

  
    cout << endl;
    cout << "------------ Student Information ------------" << endl;

    cout << left << boolalpha;

    cout << setw(COL_WIDTH) << "Name"              << ": " << name << endl;
    cout << setw(COL_WIDTH) << "Age"               << ": " << age << " Years" << endl;
    cout << setw(COL_WIDTH) << "Height"            << ": " << fixed << setprecision(1) << height << " ft" << endl;
    cout << setw(COL_WIDTH) << "Village"           << ": " << village << endl;
    cout << setw(COL_WIDTH) << "Subject"           << ": " << subject << endl;
    cout << setw(COL_WIDTH) << "Account Balance"    << ": $" << fixed << setprecision(2) << accountBalance << endl;
    cout << setw(COL_WIDTH) << "Gmail"             << ": " << gmail << endl;
    cout << setw(COL_WIDTH) << "Phone Number"      << ": " << phoneNumber << endl;
    cout << setw(COL_WIDTH) << "Country"           << ": " << COUNTRY << endl;
    cout << setw(COL_WIDTH) << "Blood Group"       << ": " << bloodGroup << endl;
    cout << setw(COL_WIDTH) << "Married Status"    << ": " << (married ? "Yes" : "No") << endl;
    cout << setw(COL_WIDTH) << "Grade"             << ": " << grade << endl;
    cout << setw(COL_WIDTH) << "Passed Status"     << ": " << isPassed << endl;
    cout << setw(COL_WIDTH) << "Graduation Status" << ": " << isGraduated << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}


void clearInputBuffer() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}  
এই ফাংশনটি C++ প্রোগ্রামিংয়ের একটি অত্যন্ত গুরুত্বপূর্ণ অংশ, বিশেষ করে যখন  cin >> এবং getline() একই প্রোগ্রামে ব্যবহার করা হয়।
   
যখন আপনি cin >> age; লিখে এন্টার চাপা হয়, তখন বাফারে (মেমরিতে) দেওয়া সংখ্যাটি তো যায়ই, সাথে ওই এন্টার (Enter/New line) ক্যারেক্টারটিও থেকে যায়। 
   
পরবর্তীতে যখন  getline() ব্যবহার করা হয়, তখন সে বাফারে থাকা ওই পুরোনো 'এন্টার' দেখে মনে করে  ইনপুট দিয়ে ফেলে হয়েছে, 
ফলে সে কোনো ইনপুট না নিয়েই পরের লাইনে চলে যায়। এই সমস্যা বা Input Skip সমস্যা সমাধানের জন্যই clearInputBuffer() ব্যবহার করা হয়।

cin.clear();
এটি ইনপুট স্ট্রিমের Error Flags পরিষ্কার করে।
কোড একটি সংখ্যা (int) চাইছে কিন্তু ইউজার ভুল করে একটি অক্ষর (abc) টাইপ করেছে। তখন সি++ এর ইনপুট সিস্টেম একটি "Fail State"-এ চলে যায় এবং এরপর আর কোনো ইনপুট নিতে চায় না।
cin.clear() ওই এরর স্টেটটি মুছে ফেলে সিস্টেমকে আবার সচল করে।

cin.ignore(numeric_limits<streamsize>::max(), '\n');
এই লাইনটি বাফারে জমে থাকা সব আবর্জনা পরিষ্কার করে। এর দুটি অংশ আছে:
numeric_limits<streamsize>::max(): এটি একটি বিশাল বড় সংখ্যা (প্রায় অসীম)। এর মানে হলো "যতক্ষণ পর্যন্ত পারো ইগনোর বা মুছতে থাকো"। এটি <limits> হেডার ফাইল থেকে আসে।
'\n': এটি হলো স্টপ সিগন্যাল। অর্থাৎ, "সবকিছু মুছতে থাকো যতক্ষণ না একটি নিউ-লাইন বা এন্টার পাচ্ছো"।


প্রফেশনাল এবং স্ট্যান্ডার্ড নিয়ম অনুযায়ী যেকোনো ফাংশন int main() এর উপরে রাখা উচিত।

১. (The "Top-Down" Logic)
C++ এ কম্পাইলার উপর থেকে নিচে কোড পড়ে। যদি ফাংশনটি int main() এর নিচে লিখা হয় এবং main() এর ভেতর থেকে তাকে (call করা হয়), 
তবে কম্পাইলার তাকে চিনতে পারবে না এবং এরর (Error) দিবে। 
কারণ কম্পাইলার যখন main এর ভেতর ওই ফাংশনটিকে পাবে, তখন সে তার সংজ্ঞা আগে কোথাও খুঁজে পাবে না।

২. এটি প্রফেশনাল?
যেকোনো বড় প্রজেক্টে গ্লোবাল কনস্ট্যান্ট (যেমন  COL_WIDTH) এবং ইউটিলিটি ফাংশন (যেমন clearInputBuffer) সবার উপরে রাখা হয়। 
এতে কোড অনেক বেশি গোছানো থাকে এবং অন্য কোনো ফাংশন থেকেও চাইলে সেটিকে ব্যবহার করা যায়।
