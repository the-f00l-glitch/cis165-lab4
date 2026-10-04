#include <iostream>

using namespace std;

int main()
{
    //base numbers
    double num1  =  28;
    double num2  =  32;
    double num3  =  37;
    double num4  =  24;
    double num5  =  33;
    
    //calculations varibles
    double sum;
    double average;
    
    
    // add them up
    sum = num1 + num2 + num3 + num4 + num5;
    
    //the sum divided by how many numbers their are
    average = sum / 5;
    
    // display sum and average with correct  varibles
    cout<< "The sum of five varibles is "<< sum << endl;
    cout<< "The average of the five varibles is "<< average << endl;
    

    return 0;
}