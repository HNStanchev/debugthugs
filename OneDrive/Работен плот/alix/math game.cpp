// math game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num1, num2, answer, userAnswer;
    int answer1 = 0, answer2 = 0, answer3 = 0, calculatedSum;
    int choice;
    char playAgain;

    cout << "Select + (1), - (2), or X (3): ";
    cin >> choice;

    if (choice > 3 || choice < 1) {
        cout << "WRONG INPUT. PLEASE RESTART." << endl;
        return 1;
    }

    if (choice == 1) { // Addition
        num1 = rand() % 2500 + 1;
        num2 = rand() % 1500 + 1;
        answer1 = num1 + num2;

        cout << "What is " << num1 << " + " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer1)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer1 << "." << endl;

        num1 = rand() % 2500 + 1;
        num2 = rand() % 1500 + 1;
        answer2 = num1 + num2;

        cout << "What is " << num1 << " + " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer2)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer2 << "." << endl;

        num1 = rand() % 2500 + 1;
        num2 = rand() % 1500 + 1;
        answer3 = num1 + num2;

        cout << "What is " << num1 << " + " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer3)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer3 << "." << endl;

    }
    else if (choice == 2) { // Subtraction
        num1 = rand() % 100 + 1500;
        num2 = rand() % 1500 + 1;
        answer1 = num1 - num2;

        cout << "What is " << num1 << " - " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer1)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer1 << "." << endl;

        num1 = rand() % 100 + 1500;
        num2 = rand() % 1500 + 1;
        answer2 = num1 - num2;

        cout << "What is " << num1 << " - " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer2)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer2 << "." << endl;

        num1 = rand() % 100 + 1500;
        num2 = rand() % 1500 + 1;
        answer3 = num1 - num2;

        cout << "What is " << num1 << " - " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer3)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer3 << "." << endl;

    }
    else if (choice == 3) { // Multiplication
        num1 = rand() % 12 + 1;
        num2 = rand() % 12 + 1;
        answer1 = num1 * num2;

        cout << "What is " << num1 << " X " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer1)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer1 << "." << endl;

        num1 = rand() % 12 + 1;
        num2 = rand() % 12 + 1;
        answer2 = num1 * num2;

        cout << "What is " << num1 << " X " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer2)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer2 << "." << endl;

        num1 = rand() % 12 + 1;
        num2 = rand() % 12 + 1;
        answer3 = num1 * num2;

        cout << "What is " << num1 << " X " << num2 << "? ";
        cin >> userAnswer;
        if (userAnswer == answer3)
            cout << "Correct!" << endl;
        else
            cout << "Incorrect. The correct answer is " << answer3 << "." << endl;
    }

    // Final combined question
    calculatedSum = answer1 + answer2 + answer3;
    int userSum;
    cout << "Now, please type in the sum of your three answers: ";
    cin >> userSum;

    if (userSum == calculatedSum) {
        cout << "Correct! Your total sum is: " << calculatedSum << endl;
    }
    else {
        cout << "Incorrect. The correct total sum is: " << calculatedSum << "." << endl;
    }
    cout << "The code for the chest is *debugthugs*";
}