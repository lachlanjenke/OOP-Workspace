#include <iostream> 
using namespace std; 

int main() { 
    int length = 0, value1 = 0, value2 = 0, highestPower=0,sum=0,counter=0,sumLength=0; // Initialise variables

    cout << "Enter the length of the binary number you wish to enter: "; // Prompt user for length
    cin >> length; 

    highestPower = length - 1; 

    int *array1 = new int[length]; // Dynamically allocate memory
    int *array2 = new int[length]; 

    cout << "Enter the first value of the first binary number (left to right): "; // Input the first array
    cin >> array1[0]; 
    for (int i = 1; i < length; i++) {
        cout << "Enter the next value: "; 
        cin >> array1[i]; 
    }

    cout << "Enter the first value of the second binary number (left to right): "; // Input the second array
    cin >> array2[0]; 
    for (int i = 1; i < length; i++) {
        cout << "Enter the next value: "; 
        cin >> array2[i]; 
    }

    for (int i = 0; i < length; i++) { // Convert to base 10/decimal 
        if (array1[i] == 1) {
            value1 += pow(2,highestPower);
        }
        if (array2[i] == 1) {
            value2 += pow(2,highestPower);
        }
        highestPower--; 
    }

   sum = value1 + value2; 

    while (pow(2,counter) < sum) { // Check what power of 2 the conversion will go up to
        counter++; 
    } 

    sumLength = counter; // Copy value

    int *sumArray = new int[sumLength]; 

    counter--; 
    while (sum/2 != 0) { // Conerting to binary
        sumArray[counter] = sum - (sum/2) * 2;
        sum = sum/2; 
        counter--; 
    }

    sumArray[counter] = 2 - sum; // Final conversion

    for (int j = 0; j < sumLength; j++) { // Printing the binary conversion
        cout << sumArray[j];
    }
    cout << endl; 


    delete[] array1; // Free memory
    delete[] array2;

    return 0; // End code
}