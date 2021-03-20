/*
* Name: Preston Burkhardt
* Class: CS-210 Programming Languanges
* Project 1: 12/24 Hour Clock
* Southern New Hampshire University
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>        // needed for srand(time(0))
using namespace std;

// declares and initializes global constant variable for total seconds in 1 day
const int secondsInOneDay = 86400;


// outputs the time display. Takes hours, minutes, and seconds as arguements to fill out clocks
void TimeDisplay (int hours, int minutes, int seconds) {
    cout << setw(26) << setfill('*') << "*" << "    " << setw(26) << setfill('*') << "*" << endl;           // asterisk line
    printf("*      %s     *", "12-Hour Clock"), cout << "    ";                                             // 12-hr clock header
    printf("*      %s     *", "24-Hour Clock"), cout << endl;                                               // 24-hr clock header

    // if/else branch based on whether hours is > or = 12 in order to determine AM or PM for 12-hr clock
    if (hours >= 12) {
        printf("*      %02d:%02d:%02d %s      *", hours, minutes, seconds, "P M"), cout << "    ";          // 12-hr PM time
    }                                                                                                       
    else {
        printf("*      %02d:%02d:%02d %s      *", hours, minutes, seconds, "A M"), cout << "    ";          // 12-hr AM time
    }

    printf("*        %02d:%02d:%02d        *", hours, minutes, seconds), cout << endl;                      // 24-hr time 
    cout << setw(26) << setfill('*') << "*" << "    " << setw(26) << setfill('*') << "*" << endl;           // asterisk line
}

// outputs the menu display
void MenuDisplay() {
    cout << setw(26) << setfill('*') << "*" << endl;                // asterisk line
    printf("*  %s      *", "1 - Add One Hour"), cout << endl;       // option 1 line
    printf("*  %s    *", "2 - Add One Minute"), cout << endl;       // option 2 line
    printf("*  %s    *", "3 - Add One Second"), cout << endl;       // option 3 line
    printf("*  %s      *", "4 - Exit Program"), cout << endl;       // option 4 line
    cout << setw(26) << setfill('*') << "*" << endl;                // asterisk line
}

// calculates hrs, min, and sec. 
// takes total seconds in and passes hrs/min/sec out by reference to be used in timeDisplay()
// secondsInOut is also passed out by reference in order for the program to keep track of the total seconds to allow future time calculations
void TimeCalc(int& secondsInOut, int &hrsOut, int &minOut, int &secOut) {
    // if and nested if/else statements handle the rollover of the clock for times > 23:59:59
    if (secondsInOut >= secondsInOneDay) {
        int secondsHolder = secondsInOut - secondsInOneDay;     // secondsHolder gets assigned the seconds in excess of secondsInOneDay to handle rollovers > 1 second
        if (secondsHolder != 0) {                               // if seconds holder isn't 0, assign that number to secondsInOut to get used in the time calculation
            secondsInOut = secondsHolder;  
        }
        else {                                                  // else statement handls single second rollover
            secondsInOut = 0;
        }
    }
    // calculates the hours. minutes, and seconds based off of secondsInOut
    hrsOut = (secondsInOut / 60) / 60;
    minOut = (secondsInOut / 60) - (hrsOut * 60);
    secOut = secondsInOut % 60;
}

// main driver code of program
int main() {
    // defines and initializes variables with default values
    int totalHours = 0;
    int totalMinutes = 0;
    int totalSeconds = 0;
    int userSelection = 0;
    int startSeconds;           // all time is based off of calulations performed with/on startSeconds

    // gets current time EST via finding the remainder of (epoch seconds - 4hrs) / total seconds in a day
    startSeconds = (time(0) - 14400) % secondsInOneDay;

    // calculate time and output both displays
    TimeCalc(startSeconds, totalHours, totalMinutes, totalSeconds);
    TimeDisplay(totalHours, totalMinutes, totalSeconds);
    MenuDisplay();

    // while loop to continuously loop through program until user selects "4"
    while (userSelection != 4) {
        cin >> userSelection;

        // switch statement to handle option choice branches
        switch (userSelection) {
            case 1:                         // adds one hour
                startSeconds += 3600;
                break;
            case 2:                         // adds one minute
                startSeconds += 60;
                break;
            case 3:                         // adds one second
                startSeconds++;
                break;
            case 4:                         // exits program
                cout << "Goodbye" << endl;
                return 0;
            default:
                break;
        }

    // once user chooses option, calculate time with new startSeconds and output both displays
    TimeCalc(startSeconds, totalHours, totalMinutes, totalSeconds);
    TimeDisplay(totalHours, totalMinutes, totalSeconds);
    MenuDisplay();
    }
    return 0;
}