#include<iostream>
#include<cmath>//library to allow pow function
#include<iomanip>//library to allow setw and setprecision
using namespace std;
double fallingDistance(int sec);//function prototype

int main()
{  
    int seconds;//declaring variables 
    double distance;
    cout << "TIME FALLING  |  DISTANCE" << endl;
    cout << "----------------------------" << endl;
    for(seconds = 1; seconds <= 10; seconds++)//for loop to perform function and return new value each time 
    //argument is increased
    {
        distance = fallingDistance(seconds);//calling function to perform equation converting seconds to distance
        cout << setw(4) << setprecision(2) << fixed;
        cout << seconds << " seconds  |  " << distance << " meters" << endl;
    }
    return 0;
}

double fallingDistance(int sec)//function to calculate distance using seconds as argument
{
    double dist = 0.5 * 9.8 * pow(sec, 2); 
    return dist; // return value
}