#include <iostream>
using namespace std;
int main()
{
    const double ANNUAL_RATE = 1.5;
    int year5 = 5;
    int year7 = 7;
    int year10 = 10;
    
    double oceanLvlyear5 = ANNUAL_RATE * year5;
    double oceanLvlyear7 = ANNUAL_RATE * year7;
    double oceanLvlyear10 = ANNUAL_RATE * year10;
    
    cout << "After 5 years: " << oceanLvlyear5 << "mm." << endl;
    cout << "After 7 years: " << oceanLvlyear7 << "mm." << endl;
    cout << "After 10 years: " << oceanLvlyear10 << "mm." << endl;
    return 0;
}
