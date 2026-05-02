#include <iostream>
using namespace std;
int main(){
   // Create integer variables
   int length = 4;
   int width = 6;

   // Calculate the area of a rectangle
   int area = length * width;

   // Print the variables
   cout << "Length is: " << length << "\n";
   cout << "Width is: " << width << "\n";
   cout << "Area of the rectangle is: " << area << "\n";
}


#include <iostream>
#include <string>
using namespace std;
int main(){
     int num1, num2, num3;
     num1 = 10, num2 = 20;
     
     cout<< "Num1 = " <<num1 <<endl;
     cout<< "Num2 = " <<num2 <<endl;

     num3 = num2;
     num2 = num1;
     num1 = num3;

     cout << "Num1 = " << num1 << endl;
     cout << "Num2 = " << num2 << endl;
     return 0;
}



#include <iostream>
#include <string>
using namespace std;
int main(){
     int num1, num2, num3;
     
     cout<< "Enter first integer number: ";
     cin>> num1;

     cout << "Enter second integer number: ";
     cin >> num2;
     
     cout<< "Num1 is: " <<num1 <<endl;
     cout<< "Num2 is: " <<num2 <<endl;

     num3 = num2;
     num2 = num1;
     num1 = num3;

     cout << "Num1 = " << num1 << endl;
     cout << "Num2 = " << num2 << endl;
     return 0;
}
