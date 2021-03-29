#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

// cityInfo class header info
class CityInfo {
    private:
        string cityName;
        int cityFahrentheitTemp;
        double cityCelsiusTemp;
        double setCelsiusTemp(int fahTemp);
    
    public:
        CityInfo(string name, int fahTemp, double celTemp);
        string getCityName();
        int getFahTemp();
        double getCelTemp();
};

// CityInfo constructor. Takes two arguments and defaults celTemp so that it can be calculated by calling private helper function
CityInfo::CityInfo(string name, int fahTemp, double celTemp = 0.0) {
    cityName = name;
    cityFahrentheitTemp = fahTemp;
    cityCelsiusTemp = setCelsiusTemp(fahTemp);
}

// getter function for the city name
string CityInfo::getCityName() {
    return cityName;
}

// getter function for the city's fahrenheit temp
int CityInfo::getFahTemp() {
    return cityFahrentheitTemp;
}

// getter function for the city's celsius temp
double CityInfo::getCelTemp() {
    return cityCelsiusTemp;
}

// private helper function for calculating and setting the city's celsius temp
double CityInfo::setCelsiusTemp(int fahTemp) {
    double celsiusTemp;
    celsiusTemp = (fahTemp - 32) * (5.0 / 9.0);
    return celsiusTemp;
}


// MAIN STARTS HERE
int main() {
    // define all variables and inisialize allCities vector
    ifstream inFS;
    ofstream outFS;
    string cityName;
    int cityFahTemp;
    int cityCelTemp;
    vector<CityInfo> allCities;


    // Try to open file
    cout << "Opening file FahrenheitTemperature.txt" << endl;

    // opens the txt file and displays error message if the file doesn't open properly
    inFS.open("FahrenheitTemperature.txt");
    if (!inFS.is_open()) {
        cout << "Could not open file FahrenheitTemperature.txt" << endl;
        return 1; // 1 indicates error
    }

    // get first line's info in the .txt file
    inFS >> cityName;
    inFS >> cityFahTemp;

    // create new CityInfo object via constructor and push it to the allCities vector for storage
    CityInfo city(cityName, cityFahTemp);
    allCities.push_back(city);


    // while loop to get the info from the rest of the lines, re-use city object (essentially does the same thing as lines 74 - 80)
    // also only reads info and pushes to allCities vecor provided inFS is good and doesnt fail
    while (!inFS.eof() && inFS.good()) {
        inFS >> cityName;
        inFS >> cityFahTemp;

        if (!inFS.fail()) {
            CityInfo city(cityName, cityFahTemp);
            allCities.push_back(city);
        }

    }

    inFS.close();   // close the input file stream after use

    // create and open a new txt file
    cout << "Creating and opening output file CelsiusTemperature.txt" << endl;
    outFS.open("CelsiusTemperature.txt");

    // check to see if the file opened properly and exit program with error if not	
    if (!outFS.is_open()) {
        cout << "The output file did not open!" << endl;
        return 1;
    }

    // iterates through the allCities vector, gets the city name and celsius temp for each item in the vector and writes it to the output file
    for (int i = 0; i < allCities.size(); i++) {
        outFS << allCities.at(i).getCityName() << " " << allCities.at(i).getCelTemp() << endl;
    }

    outFS.close();  // close the output file stream after use

    return 0;
}