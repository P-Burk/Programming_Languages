/*
* Name: Preston Burkhardt
* Class: CS-210 Programming Languanges
* Southern New Hampshire University
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// function for displaying the top and bottom lines of asterisks
void AstriskLine() {
    cout << setw(26) << setfill('*') << "*" << "    " << setw(26) << setfill('*') << "*" << endl;
}

// function for displaying the 12-hr and 24-hr clock headers
void TimeHeaders() {
    printf("*      %s     *", "12-Hour Clock");
    cout << "    ";
    printf("*      %s     *", "24-Hour Clock");
    cout << endl;
}

// function for displaying the 12-hr AM time
void AMTimeFormat(int hours, int min, int sec) {
    printf("*      %02d:%02d:%02d %s      *", hours, min, sec, "A M");
    cout << "    ";
}

// function for displaying the 12-hr PM time
void PMTimeFormat(int hours, int min, int sec) {
    printf("*      %02d:%02d:%02d %s      *", hours, min, sec, "P M");
    cout << "    ";
}

// function for displaying the 24-hr time
void TFHTimeFormat(int hours, int min, int sec) {
    printf("*      %02d:%02d:%02d %s      *", hours, min, sec, "P M");
    cout << endl;
}

int main() {
    // defines and initializes variables with default values
    int thHours = 00;
    int thMinutes = 00;
    int thSeconds = 00;
    int tfhHours = 00;
    int tfhMinutes = 00;
    int tfhSeconds = 00;

    AstriskLine();
    TimeHeaders();
    PMTimeFormat(thHours, thMinutes, thSeconds);
    TFHTimeFormat(tfhHours, tfhMinutes, tfhSeconds);
    AstriskLine();
    

    return 0;
}