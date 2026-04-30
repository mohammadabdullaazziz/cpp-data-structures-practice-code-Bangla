সি++ (C++) এ Variable (ভেরিয়েবল) হলো মেমোরির একটি নির্দিষ্ট জায়গার নাম, যেখানে  বিভিন্ন তথ্য বা ডেটা জমা রাখা হয়। 
সহজ কথায়, ভেরিয়েবল হলো একটি পাত্র বা কন্টেইনারের মতো, যার ভেতরে প্রয়োজনমতো তথ্য রাখা যায় এবং পরে তা পরিবর্তনও করা যায়।

#include <iostream>
using namespace std;

int main()

{
    int age = 29;          // integer
    double price = 10.50;   // float number 
    char grade = 'A';      // character
    string name = "Abdullah"; // text
    bool myBoolean = true;  //bool
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    return 0;

}

#include <iostream>
using namespace std;
int main(){
   string name = "Mohammad";
   int age = 30;
   float height = 5.2;
   string village = "Changmary";
   name = "Abdullah";
   string subject = "programming";
   bool isPass = true;
   char grade = 'A';
   cout << "My name is: " <<name << " My age is: " <<age << " My height is: " <<height << " My village is: " <<village <<endl;
   cout << "My favourite subject is: " <<subject <<endl;
   cout << "My grade is: " <<grade <<endl;
   cout << "i am " <<isPass <<endl;
   return 0;
}



#include <iostream>
#include <string>
#include <iomanip> // দশমিকের ঘর এবং ফরম্যাটিং এর জন্য

using namespace std;

int main() {
    // --- ১. টেক্সট ডাটা (Strings) ---
    string name        = "Abdullah"; // সরাসরি আপডেট করা নাম
    string village     = "Changmary";
    string subject     = "Programming";
    string gmail       = "Programmeraziz216@gmail.com";
    string phoneNumber = "01568451112";
    const string COUNTRY = "Bangladesh"; // দেশের নাম কনস্ট্যান্ট রাখা ভালো

    // --- ২. পূর্ণসংখ্যা ও অক্ষর (Integer & Char) ---
    int age          = 30;
    char grade       = 'A';
    char bloodGroup  = '+';

    // --- ৩. দশমিক সংখ্যা (Floating Points) ---
    float height          = 5.2f;
    double accountBalance = 96.8965423589;

    // --- ৪. লজিক (Booleans) ---
    bool isPass      = true;
    bool isGraduated = false;

    // --- আউটপুট সেকশন ---
    cout << "--------------- Student Information -----------------" << endl;
    
    cout << "My name is         : " << name << endl;
    cout << "My age is          : " << age << endl;
    cout << "My height is       : " << height << " feet" << endl;
    cout << "My village is      : " << village << endl;
    cout << "My subject is      : " << subject << endl;
    cout << "My Grade is        : " << grade << endl;

    // boolalpha দিলে 1/0 এর বদলে true/false দেখাবে
    cout << boolalpha; 
    cout << "I'am Passed        : " << isPass << endl;
    cout << "I'am Graduated     : " << isGraduated << endl;

    আসলে boolalpha কোনো টেক্সট হিসেবে প্রিন্ট হয় না। এটি একটি I/O Manipulator, যার কাজ হলো এর পরবর্তী বুলিয়ান (bool) ভেরিয়েবলগুলোর আউটপুট কেমন হবে তা ঠিক করে দেওয়া।
    boolalpha ছাড়া: true হলে 1 এবং false হলে 0 প্রিন্ট হয়।
    boolalpha দিলে: true হলে সরাসরি true এবং false হলে false প্রিন্ট হয়।
    এটি স্ক্রিনে কিছু লিখে দেখাবে না, বরং পর্দার আড়ালে কাজ করে আউটপুট ফরম্যাট বদলে দেয়।

   সহজ কথায় বলতে গেলে, I/O Manipulator হলো এমন কিছু বিশেষ ফাংশন বা ইনস্ট্রাকশন যা Input/Output (যেমন cout বা cin) এর আচরণ বা স্টাইল পরিবর্তন করতে ব্যবহৃত হয়।
   এটি কোনো ডেটা নয়, বরং ডেটাটি স্ক্রিনে কিভাবে দেখাবে তার একটি নির্দেশ।

    bool isPass = true;

    cout << isPass;            // আউটপুট আসবে: 1
    cout << boolalpha;         // এখানে কিছুই প্রিন্ট হবে না, শুধু মোড পরিবর্তন হবে
    cout << isPass;            // এখন আউটপুট আসবে: true

    আবার 1 এবং 0 তে ফিরে যেতে

    cout << boolalpha << true << endl;   // আউটপুট: true
    cout << noboolalpha << true << endl; // আউটপুট: 1

    // দশমিকের পর ৫ ঘর পর্যন্ত ব্যালেন্স দেখাচ্ছি
    cout << fixed << setprecision(5);
    cout << "My account balance : $" << accountBalance << endl;

    এটিও ঠিক boolalpha এর মতোই কাজ করে। fixed এবং setprecision কোনো সাধারণ টেক্সট নয় যে তারা সরাসরি স্ক্রিনে প্রিন্ট হবে। এদের বলা হয় I/O Manipulators।
    এদের কাজ হলো কম্পিউটারকে ইনস্ট্রাকশন বা নির্দেশ দেওয়া যে, পরবর্তী সংখ্যাগুলো সে কীভাবে দেখাবে।
    fixed: এটি কম্পিউটারকে বলে, "দশমিক সংখ্যাটিকে বৈজ্ঞানিক ফরমেটে (যেমন 2.0e+01) না দেখিয়ে সাধারণ স্থির (Fixed) ফরমেটে দেখাও।
    "setprecision(5): এটি কম্পিউটারকে বলে, "দশমিকের পর ঠিক ৫টি ঘর দেখাও।"

    cout << fixed << setprecision(5);
   তখন স্ক্রিনে কিছু লেখা আসে না, কিন্তু কম্পিউটার তার মেমরিতে সেট করে নেয় যে "এখন থেকে কোনো দশমিক সংখ্যা আসলে আমি ৫ ঘর দেখাবো"।
   একই লাইনে এভাবে লিখলে কোড আরও পরিষ্কার থাকে:
   cout << "Balance : $" << fixed << setprecision(5) << accountBalance << endl;

    cout << "My blood group is  : " << bloodGroup << endl;
    cout << "My country is      : " << COUNTRY << endl;
    cout << "My gmail is        : " << gmail << endl;
    cout << "My phone number is : " << phoneNumber << endl;

    cout << "----------------------------------------------------" << endl;

    return 0;
}






#include <iostream>
#include <string> // string ব্যবহারের জন্য এটি রাখা ভালো প্র্যাকটিস
#include <iomanip> // দশমিকের পর ঘর নির্দিষ্ট করার জন্য

using namespace std;

int main() {
    // ১. ভেরিয়েবল ডিক্লারেশন এবং ইনিশিয়ালাইজেশন
    string name = "Abdullah"; // সরাসরি আপডেট করা মানটিই শুরুতে দেওয়া যায়
    int age = 30;
    float height = 5.2f; // float এর ক্ষেত্রে শেষে 'f' দেওয়া ভালো
    string village = "Changmary";
    string subject = "Programming";
    bool isPassed = true;
    float cgpa = 3.50f;
    char grade = 'A';
    double accountBalance = 23.25698865;
    // একাধিক ভেরিয়েবল এক লাইনে ডিক্লেয়ার করা
    int num1 = 20, num2 = 30;

    // ২. আউটপুট ফরম্যাটিং
    cout << "---------- Personal Info ----------" << endl;
    cout << "Name      : " << name << endl;
    cout << "Age       : " << age << " years" << endl;
    cout << "Height    : " << height << " feet" << endl;
    cout << "Village   : " << village << endl;
    cout << "Subject   : " << subject << endl;

    // ৩. বুলিয়ান মানকে 1/0 এর বদলে True/False দেখানো
    cout << "Passed    : " << boolalpha << isPassed << endl; 

    // ৪. দশমিকের পর ২ ঘর নির্দিষ্ট করা
    cout << "CGPA      : " << fixed << setprecision(2) << cgpa << endl;
    cout << "Grade     : " << grade << endl;
    cout << "Account Balance: " << fixed << setprecision(8) << accountBalance << endl;
    
    cout << "-----------------------------------" << endl;
    cout << "Numbers   : Num1 = " << num1 << " | Num2 = " << num2 << endl;

    return 0;
}

১. #include <string>: যদিও অনেক কম্পাইলারে শুধু iostream দিলেই কাজ করে, কিন্তু string ব্যবহার করলে এই হেডার ফাইলটি ইনক্লুড করা স্ট্যান্ডার্ড নিয়ম।

২. boolalpha এর ব্যবহার: ডিফল্টভাবে C++ এ bool প্রিন্ট করলে 1 বা 0 আসে। boolalpha ব্যবহার করলে সেটি সরাসরি true বা false লেখা দেখাবে, যা পড়তে সুবিধা হয়।

৩. দশমিক নিয়ন্ত্রণ (fixed ও setprecision) cgpa = 3.50 , কিন্তু সাধারণ cout এ এটি শুধু 3.5 দেখাবে। setprecision(2) ব্যবহার করলে এটি সব সময় দশমিকের পর দুই ঘর (যেমন: 3.50) দেখাবে।

৪. আলাইনমেন্ট (Alignment): আমি কোলনগুলো (:) একই লাইনে সাজিয়েছি। এতে আউটপুটটি দেখতে অনেক বেশি পরিচ্ছন্ন এবং টেবিলের মতো মনে হয়।

৫. endl এর ব্যবহার: এক লাইনে অনেকগুলো endl , যা ঠিক আছে। তবে অনেক বড় প্রোগ্রামে \n ব্যবহার করা দ্রুত কাজ করে। এখানে স্টাইলটি সুন্দর আছে।

#include <iomanip> না দাও, তবে কোড রান করবে কিন্তু নিচের সুবিধাগুলো পাবো না:

setprecision(2) কাজ করবে না।

fixed কাজ করবে না।

setw(10) কাজ করবে না।

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // ১. স্ট্রিং এবং ক্যারেক্টার (Text & Symbols)
    string userName = "Abdullah"; 
    string village = "Changmary";
    string subject = "Computer Science";
    char userGrade = 'A';
    char bloodGroup = '+'; // এক্সট্রা ক্যারেক্টার ডাটা

    // ২. পূর্ণসংখ্যা (Integers)
    int userAge = 29;
    int rollNumber = 101;
    long long nationalID = 1234567890123LL; // খুব বড় সংখ্যার জন্য long long

    // ৩. দশমিক সংখ্যা (Floating Points)
    float productPrice = 10.50f; 
    float height = 5.8f;
    double accountBalance = 20.896458358;
    double cgpa = 3.85;

    // ৪. বুলিয়ান (Logic)
    bool isAccountActive = true; 
    bool hasScholarship = false;
    bool married = true;

    // ৫. কনস্ট্যান্ট (মান পরিবর্তন করা যাবে না)
    const string COUNTRY = "Bangladesh";

    // --- আউটপুট ডিজাইন ---
    cout << "========================================" << endl;
    cout << "        FULL USER DATA PROFILE          " << endl;
    cout << "========================================" << endl;

    cout << left << setw(18) << "Name"           << ": " << userName << endl;
    cout << left << setw(18) << "Age"            << ": " << userAge << " years" << endl;
    cout << left << setw(18) << "National ID"    << ": " << nationalID << endl;
    cout << left << setw(18) << "Village"        << ": " << village << endl;
    cout << left << setw(18) << "Subject"        << ": " << subject << endl;
    cout << left << setw(18) << "Blood Group"    << ": B" << bloodGroup << endl;
    
    cout << "----------------------------------------" << endl;
    
    cout << left << setw(18) << "Height"         << ": " << height << " feet" << endl;
    cout << left << setw(18) << "Product Price"  << ": $" << fixed << setprecision(2) << productPrice << endl;
    cout << left << setw(18) << "CGPA"           << ": " << cgpa << endl;
    cout << left << setw(18) << "Grade"          << ": " << userGrade << endl;
    
    // ৫ ঘর পর্যন্ত ব্যালেন্স
    cout << left << setw(18) << "Account Balance"<< ": $" << fixed << setprecision(5) << accountBalance << endl;

    cout << "----------------------------------------" << endl;
    
    // boolalpha দিয়ে true/false দেখানো
    cout << boolalpha; 
    cout << left << setw(18) << "Account Status" << ": " << isAccountActive << endl;
    cout << left << setw(18) << "Scholarship"    << ": " << hasScholarship << endl;
    cout << left << setw(18) << "Country"        << ": " << COUNTRY << endl;
     cout << left << setw(18) << "Married" << ":" << " " << (married ? "Yes" : "No") << endl;

    cout << "========================================" << endl;

    return 0;
} 


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // ১. টেক্সট এবং অক্ষর (Text & Character)
    string name = "Abdullah";      // অনেকগুলো অক্ষর বা বাক্য
    char grade = 'A';              // একটি মাত্র অক্ষর (Single Quote)
    string village = "Changmary";  // আরও একটি টেক্সট ডাটা

    // ২. পূর্ণসংখ্যা (Integers)
    int age = 29;                  // সাধারণ পূর্ণসংখ্যা
    long long phone = 88017000000; // অনেক বড় সংখ্যার জন্য long long
    short roomNumber = 101;        // ছোট সংখ্যার জন্য (মেমোরি কম নেয়)

    // ৩. দশমিক সংখ্যা (Floating Points)
    float height = 5.8f;           // সাধারণ দশমিক (শেষে f দিতে হয়)
    double balance = 20.896458358; // অনেক বড় এবং নিখুঁত দশমিক সংখ্যা
    float price = 10.50f;          // পণ্যের দাম

    // ৪. লজিক (Boolean)
    bool isStudent = true;         // শুধু true (১) অথবা false (০)
    bool isGraduated = false;

    // ৫. কনস্ট্যান্ট (মান যা আর বদলানো যাবে না)
    const double PI = 3.14159;

    // --- আউটপুট ---
    cout << "===== All Data Types Profile =====" << endl;
    
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << " years" << endl;
    cout << "Phone       : " << phone << endl;
    cout << "Village     : " << village << endl;
    
    cout << "Height      : " << height << " feet" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Price       : $" << price << endl;

    // ব্যালেন্স ৫ ঘর পর্যন্ত দেখাচ্ছি
    cout << "Balance     : $" << fixed << setprecision(5) << balance << endl;

    // true/false সরাসরি দেখানোর জন্য boolalpha
    cout << boolalpha; 
    cout << "Is Student  : " << isStudent << endl;
    cout << "Graduated   : " << isGraduated << endl;
    
    cout << "Constant PI : " << PI << endl;
    cout << "==================================" << endl;

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 যখন << " " << "years old" লিখা হয়, তখন কম্পাইলারকে বারবার << অপারেটর কল করতে হয়। তার চেয়ে " years old" (শুরুতে একটি স্পেস দিয়ে) লেখা বেশি দক্ষ।
 যদি অনেকগুলো লাইন এমন থাকে, তবে বারবার left << setw(15) না লিখে একটি কনস্ট্যান্ট ভেরিয়েবল ব্যবহার করা যেতে পারে:


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // কিছু স্যাম্পল ডাটা
    string name = "Mohammad Abdullah";
    int age = 22;
    float height = 5.8f;
    string university = "BUET";
    string dept = "CSE";
    string city = "Dhaka";
    string hobby = "Coding";

    const int w = 18; // এখানে এক জায়গায় মান পরিবর্তন করলে সব লাইনে কাজ করবে

    cout << "           STUDENT PROFILE               " << endl;
    cout << "==========================================" << endl;

    cout << left << setw(w) << "Full Name"     << ": " << name << endl;
    cout << left << setw(w) << "Age"           << ": " << age << " years old" << endl;
    cout << left << setw(w) << "Height"        << ": " << fixed << setprecision(1) << height << " feet" << endl;
    cout << left << setw(w) << "University"    << ": " << university << endl;
    cout << left << setw(w) << "Department"    << ": " << dept << endl;
    cout << left << setw(w) << "Current City"  << ": " << city << endl;
    cout << left << setw(w) << "Favorite Hobby" << ": " << hobby << endl;
    return 0;
}

এখানে int এবং const int এর কাজ সম্পূর্ণ আলাদা।
int হলো একটি ডাটা টাইপের নাম (যেমন: পূর্ণসংখ্যা)। এটি প্রোগ্রামে হাজার বার ব্যবহার করা যাবে, 
যতক্ষণ ভেরিয়েবলের নামগুলো (যেমন: num1, width, age) আলাদা থাকছে।

int num1: এটি একটি সাধারণ ভেরিয়েবল যার মান চাইলে পরে পরিবর্তন করা যাবে।

const int width: এটি একটি "ধ্রুবক" বা Constant। const যুক্ত করার মানে হলো, 
কম্পিউটারকে বলা হসছে যে width এর মান পুরো প্রোগ্রামে সব সময় ১৫-ই থাকবে, এটি কেউ ভুল করেও পরিবর্তন করতে পারবে না।
