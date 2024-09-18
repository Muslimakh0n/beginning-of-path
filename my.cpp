// Bismillah
#include <iostream>
using namespace std;

int main() {
    cout << "Programming is" << endl;
    cout << "fun!";

    return 0
}

#include <iostream>
#include <ctime>
using namespace std;


int calculateDaysLived(int day, int month, int year) {

    time_t now = time(0);
    tm *current = localtime(&now);


    tm birth = {};
    birth.tm_mday = day;
    birth.tm_mon = month - 1; 
    birth.tm_year = year - 1900; 


    time_t birthTime = mktime(&birth);
    time_t currentTime = mktime(current);


    double seconds = difftime(currentTime, birthTime);
    int days = seconds / (60 * 60 * 24);

    return days;
}

int main() {
    int day, month, year;
    char choice;

    do {
     cout << "Enter your date of birth (day month year): ";
        cin >> day >> month >> year;

     
        int daysLived = calculateDaysLived(day, month, year);
        cout << "You have lived " << daysLived << " days since your birth." << endl;

     cout << "Do you want to enter another date? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended." << endl;

    return 0;
}

// int main() {
//     // Write C++ code here
//   int month = 2, days = 28;
  
//   cout << "Month" << month << " has " <<days << " days " << endl;

//     return 0;
// }

int main(){
    double regularWages,
    basePayRate =18.25,
    regularHours = 40.0,
    overtimeWages,
    overtimePayRate = 27.78,
    overtimeHours = 10,
    totalWages;
    
    regularWages = basePayRate * regularHours;
    
    overtimeWages = overtimePayRate * overtimeHours;
    
    totalWages = regularWages + overtimeWages;
    
    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}

int main(){
    double regularWages,
    basePayRate =18.25,
    regularHours = 40.0,
    overtimeWages,
    overtimePayRate = 27.78,
    overtimeHours = 10,
    totalWages;
    
    regularWages = basePayRate * regularHours;
    
    overtimeWages = overtimePayRate * overtimeHours;
    
    totalWages = regularWages + overtimeWages;
    
    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}

int main(){
   int lengh, width, area;
   
   cout<< "This program calculates the area of a ";
   cout << "rectangle.\n";
   cout << "What is the length og the rectangle? ";
   cin >> lengh;
   cout << "what is the width of the rectangle? ";
   cin >> width;
   area = lengh * width;
   cout << "The area og rectangle is " << area << ".\n";
    return 0;
}