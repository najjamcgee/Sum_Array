#include <iostream>
using namespace std;
//main function should create the array and input values into the array
//----------------------------------------------------------------------
//sum function
int sum_val(int array[], int SIZE) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }
    return sum;
}
int minimum_val(int array[], int SIZE){
    int min = array[0];
    for(int i = 1; i < SIZE; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}
//-----------------------------------------------------------------------
int main(){
    //create an array with a non changable amount of 5 elements
    const int SIZE = 5;
    //set the array elements to the constant size
    int array[SIZE];

    //print the amount of numbers which is 5 that you want the user to enter
    cout << "Enter " << SIZE << " numbers: " << endl;
    //create a loop that will use the constant element size as a counter of when the loop should stop
    for(int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    //print the array to show the elements
    cout << "This is the array: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    //create another variable that will call the function to then display the minimum val in array.
    int minimum = minimum_val(array, SIZE);
    cout << "\n\nThe minimum value is: " << minimum << endl;

    //create another variable that will call the function to then display the sum val in array.
    int total_sum = sum_val(array, SIZE);
    cout << "\nThe sum of the elements of the array is: " << total_sum << endl;
    return 0;
}
