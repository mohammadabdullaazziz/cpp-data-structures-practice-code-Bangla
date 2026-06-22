সি++ (C++) ল্যাঙ্গুয়েজে Comments (কমেন্ট) এবং Escape Sequence (এস্কেপ সিকোয়েন্স) সি ল্যাঙ্গুয়েজের মতোই কাজ করে, তবে সি++ এ কিছু আধুনিক সুবিধা এবং লেখার স্টাইল রয়েছে।

#include <iostream>
using namespace std;

int main() {
  cout << "Escape Sequence";
  return 0;
}

//use of \n

#include <iostream>
using namespace std;

int main() {
    cout << "Hello User!\n";
    cout << "Welcome to the world of C++.\n";
    cout << "Line 1\nLine 2\nLine 3";

    return 0;
}

//use of \t

#include <iostream>
using namespace std;

int main() {
    cout << "ID\tName\tSubject" << endl;
    cout << "--------------------------" << endl;


    cout << "101\tMohammad\tMath" << endl;
    cout << "102\tAbdullah\tPhysics" << endl;
    cout << "103\tAziz\tEnglish" << endl;

    return 0;
}

//use of \\ backslash

#include <iostream>
using namespace std;

int main() {

    cout << "This is a backslash: \\" << endl;
    cout << "File Location: C:\\Users\\Desktop\\MyCode.cmm" << endl;

    return 0;
}

//use of \"

#include <iostream>
using namespace std;

int main() {

    cout << "She said, \"I love programming!\"" << endl;
    cout << "The book name is \"C++ Guide\"." << endl;


#include <iostream>
using namespace std;

int main() {
    // সিঙ্গেল-লাইন কমেন্ট: নিচে সি++ এস্কেপ সিকোয়েন্স টেস্ট করা হচ্ছে
    
    /* 
       মাল্টি-лайн কমেন্ট:
       নিচের কোডটিতে cout ব্যবহার করে স্ক্রিনে 
       সবগুলো এস্কেপ সিকোয়েন্সের আউটপুট দেখানো হবে।
    */
    
    // ১. নিউলাইন (\n) এবং ট্যাব (\t) এর উদাহরণ
    cout << "Learning C++ is fun!\n"; 
    cout << "Topic:\tComments\nSub-Topic:\tEscape Sequences\n";
    cout << "-----------------------------------------\n";

    // ২. ডাবল কোটেশন (\") এবং সিঙ্গেল কোটেশন (\') এর উদাহরণ
    cout << "Book Name:\t\"C++ Programming\"\n";
    cout << "Author:\t\t\'Bjarne\'\n";
    cout << "-----------------------------------------\n";

    // ৩. ব্যাকস্ল্যাশ (\\) এর উদাহরণ
    cout << "File Path:\tD:\\C++Project\\Main.cpp\n";
    cout << "-----------------------------------------\n";

    // ৪. ব্যাকস্পেস (\b) এর উদাহরণ
    // এটি কার্সার এক ঘর পেছনে নিয়ে 'x' এর ওপর 'd' বসিয়ে দেবে
    cout << "Wrong Text:\tAbcx\bd\n"; 
    cout << "-----------------------------------------\n";

    // ৫. অ্যালার্ম / বিপ সাউন্ড (\a) এর উদাহরণ
    cout << "Alert Sound:\tPlaying Beep Now!\a\n";

    return 0;
}

    return 0;
}


