#include <iostream> // Include libraries
using namespace std; //Specifying namespace 

double array_mean(int array[], int n) {
    int sum = 0; // Intialising variables
    double mean = 0; 

    for (int i = 0; i < n; i++) { 
        sum += array[i];  //Adding values
    }

    mean = (double)sum/(double)n; //Finding the mean


    return mean; //Return values
}