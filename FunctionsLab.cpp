#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


// This function finds the index of the smallest element in the array
// between the indices 'start' and 'end' (inclusive).
int locateSmallest(int array[], int start, int end) {
  // Handle edge case: if the range is invalid
  if (start > end) {
    return -1;  // Error: invalid interval
  }

  // Assume the smallest value is at the 'start' index
  int smallestIndex = start;

  // Go through the range from start+1 to end
  for (int i = start + 1; i <= end; ++i) {
    // If we find a smaller value, update the smallestIndex
    if (array[i] < array[smallestIndex]) {
      smallestIndex = i;
    }
  }

  // Return the index of the smallest value found
  return smallestIndex;
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
// Function: Search in the array from 'start' to 'end' and replace target with 1000
// Output : number of replacements made
int replaceVariable(int arr[], int target, int start, int end) {
    int replacements = 0; // counter for how many values were replaced

    for (int i = start; i <= end; i++) {
        if (arr[i] == target) {
            arr[i] = 1000;   // replace with 1000
            replacements++;  // track replacement
        }
    }

    return replacements; // return how many replacements we made
}



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // move to new line after printing all elements
}







//Write a function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. 
//     n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.


int sumOdds(int array[], int start, int end) {
    int sum = 0; // accumulator to store the sum

    for (int i = start; i <= end; i++) {
        if (array[i] % 2 != 0) {  // check if the number is odd
            sum += array[i];      // add it to the sum
        }
    }

    return sum; // return the final total
}