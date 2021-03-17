/*
* Name: Preston Burkhardt
* Class: CS-210 Programming Languanges
* Southern New Hampshire University
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>        // needed for srand(time(0))
using namespace std;


// outputs the time display. Takes hours, minutes, and seconds as arguements
void TimeDisplay (int hours, int minutes, int seconds) {
    cout << setw(26) << setfill('*') << "*" << "    " << setw(26) << setfill('*') << "*" << endl;           // asterisk line
    printf("*      %s     *", "12-Hour Clock"), cout << "    ";                                             // 12-hr clock header
    printf("*      %s     *", "24-Hour Clock"), cout << endl;                                               // 24-hr clock header

    // if/else branch based on whether hours is divisible by 12 to determine AM or PM for 12-hr clock
    if (hours / 12 != 0) {      
        printf("*      %02d:%02d:%02d %s      *", (hours - 12), minutes, seconds, "P M"), cout << "    ";   // subtract 12 from hours
    }                                                                                                       // to get PM time
    else {
        printf("*      %02d:%02d:%02d %s      *", hours, minutes, seconds, "A M"), cout << "    ";          // 12-hr AM time
    }

    printf("*        %02d:%02d:%02d        *", hours, minutes, seconds), cout << endl;                      // 24-hr clock 
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
// takes total seconds in and passes hrs/min/sec out by reference 
// TODO: find way to roll over seconds, minutes, and hrs
void TimeCalc(int secondsIn, int &hrsOut, int &minOut, int &secOut) {
    hrsOut = (secondsIn / 60) / 60;
    minOut = (secondsIn / 60) - (hrsOut * 60);
    secOut = secondsIn % 60;
}

int main() {
    // defines and initializes variables with default values
    int totalHours = 0;
    int totalMinutes = 0;
    int totalSeconds = 0;
    int userSelection = 0;
    int startNumber;

    // generates random number to be used as seconds
    //srand(time(0));
    //cout << (startNumber = (rand() % 86400)) << endl;

    //FIXME: delete this before turning in. using as placeholder to force times for testing
    startNumber = 50000;
    cout << "Starting number is: " << startNumber << endl;

    TimeCalc(startNumber, totalHours, totalMinutes, totalSeconds);
    TimeDisplay(totalHours, totalMinutes, totalSeconds);
    MenuDisplay();

    while (userSelection != 4) {
        cin >> userSelection;

        switch (userSelection) {
        case 1:                         // adds one hour
            startNumber += 3600;
            break;
        case 2:                         // adds one minute
            startNumber += 60;
            break;
        case 3:                         // adds one second
            startNumber++;
            break;
        case 4:                         // exits program
            cout << "Goodbye" << endl;
            return 0;
        default:
            break;
        }

    TimeCalc(startNumber, totalHours, totalMinutes, totalSeconds);
    TimeDisplay(totalHours, totalMinutes, totalSeconds);
    MenuDisplay();

    }

    return 0;
}