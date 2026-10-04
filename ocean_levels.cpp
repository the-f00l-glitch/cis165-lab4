#include <iostream>

using namespace std;

int main()
{   
    //constant ocean level raised by millimeters per year
    const double ANNUAL_RATE = 1.5; 
    
    //how many millimeters higher the ocean level will be after 5 years, 7 years, and 10 years.
    int five_years = 5;
    int seven_years = 7;
    int ten_years = 10;
    
    // ANNUAL_RATE * years 
    double raise_1;
    double raise_2;
    double raise_3;
    
    
    raise_1 = five_years * ANNUAL_RATE;
    raise_2 = seven_years * ANNUAL_RATE;
    raise_3 = ten_years * ANNUAL_RATE;
    
    // show results
    cout<< "in " << five_years << " years the ocean level will rise by " << raise_1 << " millimeters" << endl;
    cout<< "in " << seven_years << " years the ocean level will rise by " << raise_2 << " millimeters" << endl;
    cout<< "in " << ten_years << " years the ocean level will rise by " << raise_3 << " millimeters" << endl;
    
    

    return 0;
}