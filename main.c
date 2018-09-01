/*
 * This program displays as many numbers from the Fibonacci sequence as the user desires.
 *
 * Author: Gerardo González Becerril.
 * Date: September 1st, 2018.
 * E-mail: a01411981@itesm.mx
 */

#include <stdio.h>

int main() {

    int loops = 0; // Variable to know how many times the loop has run.
    int N; // Variable to know how many numbers the user desires.
    int sum; // Variable to store one of the numbers in the loop.

    printf("How many numbers from the sequence would you like? "); // Asks the user for a number.
    scanf("%i", &N); // Takes the user's input.

    // For loop that creates an array of two integers, that will run as many times as need for loops to reach N,
    // each time loops growing by a factor of 1.
    for (int numbers[2] = {0, 1}; loops < N; loops++) {
        printf("%i, ", numbers[0]); // Prints the first number, the sum of the array at the end of the last loop.
        sum = numbers[0] + numbers[1]; // Changes sum's value by adding the new values of the array.
        numbers[0] = numbers[1]; // Changes the first number's value to the second one's.
        numbers[1] = sum; // The second number's value takes this loop's sum's value.
    }

    return 0; // Terminates the program.

}