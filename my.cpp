// Bismillah
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;
int main() {
    cout << "Programming is" << endl;
    cout << "fun!";

    return 0;
}



// int calculateDaysLived(int day, int month, int year) {

//     time_t now = time(0);
//     tm *current = localtime(&now);


//     tm birth = {};
//     birth.tm_mday = day;
//     birth.tm_mon = month - 1; 
//     birth.tm_year = year - 1900; 


//     time_t birthTime = mktime(&birth);
//     time_t currentTime = mktime(current);


//     double seconds = difftime(currentTime, birthTime);
//     int days = seconds / (60 * 60 * 24);

//     return days;
// }

// int main() {
//     int day, month, year;
//     char choice;

//     do {
//      cout << "Enter your date of birth (day month year): ";
//         cin >> day >> month >> year;

     
//         int daysLived = calculateDaysLived(day, month, year);
//         cout << "You have lived " << daysLived << " days since your birth." << endl;

//      cout << "Do you want to enter another date? (y/n): ";
//         cin >> choice;

//     } while (choice == 'y' || choice == 'Y');

//     cout << "Program ended." << endl;

//     return 0;
// }

// // int main() {
// //     // Write C++ code here
// //   int month = 2, days = 28;
  
// //   cout << "Month" << month << " has " <<days << " days " << endl;

// //     return 0;
// // }

// int main(){
//     double regularWages,
//     basePayRate =18.25,
//     regularHours = 40.0,
//     overtimeWages,
//     overtimePayRate = 27.78,
//     overtimeHours = 10,
//     totalWages;
    
//     regularWages = basePayRate * regularHours;
    
//     overtimeWages = overtimePayRate * overtimeHours;
    
//     totalWages = regularWages + overtimeWages;
    
//     cout << "Wages for this week are $" << totalWages << endl;
//     return 0;
// }

// int main(){
//     double regularWages,
//     basePayRate =18.25,
//     regularHours = 40.0,
//     overtimeWages,
//     overtimePayRate = 27.78,
//     overtimeHours = 10,
//     totalWages;
    
//     regularWages = basePayRate * regularHours;
    
//     overtimeWages = overtimePayRate * overtimeHours;
    
//     totalWages = regularWages + overtimeWages;
    
//     cout << "Wages for this week are $" << totalWages << endl;
//     return 0;
// }

// int main(){
//    int lengh, width, area;
   
//    cout<< "This program calculates the area of a ";
//    cout << "rectangle.\n";
//    cout << "What is the length og the rectangle? ";
//    cin >> lengh;
//    cout << "what is the width of the rectangle? ";
//    cin >> width;
//    area = lengh * width;
//    cout << "The area og rectangle is " << area << ".\n";
//     return 0;
// }


// int main(){
//     int length, width, area;
    
//     cout << "This program calculates the area of a ";
//     cout << "rectangle.\n";
//     cout << "Enter the length and width of the rectangle ";
//     cout << "separated by a space.\n";
//     cin >> length >> width;
//     area = length * width;
//     cout << "The area of the rectangle is " << area << endl;
//     return 0;
// }

// int main () {
//     int books;
//     int month;
//     double perMonth;

//     cout << "How many books do you plan to read? ";
//     cin >> books;
//     cout << "How many months will it take you to read them? ";
//     cin >> month;
//     perMonth = static_cast<double>(books) / month;
//     cout << "Tha is " << perMonth << "books per month.\n";
//     return 0;
// }


// using namespace std;

// int main () {
//     int num1 = 2897, num2=3, num3=837,
//     num4=34, num5= 7, num6= 1623,
//     num7=3990, num8=3456, num9=12;
    
//     cout << setw(6) << num1 << setw(6)
//     <<num2<<setw(6)<<num3<<endl;
    
//     cout << setw(6)<<num4<< setw(6)
//     <<num5<<setw(6)<<num6<<endl;
    
//     cout << setw(6)<<num7<<setw(6)
//     <<num8<<setw(6)<<num9<<endl;
//     return 0;
// }

   

int main() {
  
    std::string firstName;
    int age;

  
    std::cout << "Please enter your first name: ";
    std::cin >> firstName;

  
    std::cout << "Please enter your age: ";
    std::cin >> age;

  
    int yearsUntil100 = 100 - age;

  
    std::cout << "Hello " << firstName << "! You will turn 100 in " 
              << yearsUntil100 << " years." << std::endl;

    return 0; 
}

// task 2

#include <iostream>  

int main() {
    
    double length, width, area, perimeter;

    
    std::cout << "Please enter the length of the rectangle: ";
    std::cin >> length;

    
    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;

    
    area = length * width;
    perimeter = 2 * (length + width);


    std::cout << "The area of the rectangle is: " << area << std::endl;
    std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;

    return 0;  
}