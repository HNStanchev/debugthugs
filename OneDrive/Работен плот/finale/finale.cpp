#include <iostream>
#include <string>
#include <cstdlib> // For rand()
#include <ctime>   // For time()

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    string word1 = "apple", word2 = "laptop", word3 = "generation", word4 = "conundrum", word5 = "enigmatic";
    string guess1, guess2, guess3, guess4, guess5;

    int num1, num2, answer, userAnswer;
    int randomNumber, userGuess;
    int answer1 = 0, answer2 = 0, answer3 = 0, calculatedSum;
    int choice;
    string gameChoice, choice1, chestChoice, goCode, wrong;

start:
    cout << "You see a chest and a man." << endl;
    cout << "Would you like to take a look at the chest or talk to the person?" << endl;
    cout << "Type 'chest' or 'man': ";
    cin >> choice1;

    if (choice1 == "chest") {
        cout << "_____________________" << endl;
        cout << "|                   |" << endl;
        cout << "|    __________     |" << endl;
        cout << "|    |   ??   |    |" << endl;
        cout << "|    |________|     |" << endl;
        cout << "|                   |" << endl;
        cout << "______________________" << endl;
    chestcode:
        cout << "You try to open the chest, but you need a code." << endl;
        cout << "*If you don't know the code, type 'no'*" << endl;
        cout << "Enter code: ";
        cin >> chestChoice;

        if (chestChoice == "no") {
            goto start; // Go back to the start
        }
        else if (chestChoice == "debugthugs") {
            cout << "_____________________" << endl;
            cout << "|                   |" << endl;
            cout << "|    __________     |" << endl;
            cout << "|    |   ????   |     |" << endl;
            cout << "|    |________|     |" << endl;
            cout << "|                   |" << endl;
            cout << "______________________" << endl;
            cout << "_____________________" << endl;
            cout << "|                   |" << endl;
            cout << "|    __________     |" << endl;
            cout << "|    |   ??    |     |" << endl;
            cout << "|    |________|     |" << endl;
            cout << "|                   |" << endl;
            cout << "______________________" << endl;
            // Chest opened successfully
            cout << "       ___________   " << endl;
            cout << "      '._==_==_=_.'  " << endl;
            cout << "       .-\\:      /-. " << endl;
            cout << "      | (|:.     |) |" << endl;
            cout << "       '-|:.     |-' " << endl;
            cout << "         \\::.    /  " << endl;
            cout << "          '::. .'    " << endl;
            cout << "            ) (      " << endl;
            cout << "          _.' '._    " << endl;
            cout << "         `\"\"\"\"\"\"\"`   " << endl;
            cout << "      Congratulations!" << endl;
            return 0; // Exit the game
        }
        else {
            cout << "WRONG CODE! Try again or go back." << endl;
            cout << "*Type 'again' to retry or 'no' to return:* ";
            cin >> wrong;

            if (wrong == "again") {
                goto chestcode;
            }
            else if (wrong == "no") {
                goto start;
            }
        }
    }
    else if (choice1 == "man") {

        // Interaction with the man

        cout << "        O        " << endl;
        cout << "       /|\\       " << endl;
        cout << "      / | \\       " << endl;
        cout << "     /  |  \\       " << endl;
        cout << "       / \\       " << endl;
        cout << "      /   \\     " << endl;
        cout << "     /     \\     " << endl;
        cout << "You made the right decision to talk to me." << endl
            << "I'll give you the chest code if you pass my test." << endl;
        cout << "Choose a game: 'math', 'word', or 'guess': ";
        cin >> gameChoice;

        if (gameChoice == "math") {
            // Math Game
            cout << "Select + (1), - (2), or x (3): ";
            cin >> choice;

            if (choice < 1 || choice > 3) {
                cout << "Invalid choice! Restarting test." << endl;
                goto start;
            }

            for (int i = 0; i < 3; i++) {
                if (choice == 1) { // Addition
                    num1 = rand() % 2500 + 1;
                    num2 = rand() % 1500 + 1;
                    answer = num1 + num2;
                }
                else if (choice == 2) { // Subtraction
                    num1 = rand() % 100 + 1500;
                    num2 = rand() % 1500 + 1;
                    answer = num1 - num2;
                }
                else { // Multiplication
                    num1 = rand() % 12 + 1;
                    num2 = rand() % 12 + 1;
                    answer = num1 * num2;
                }

                cout << "What is " << num1 << (choice == 1 ? " + " : (choice == 2 ? " - " : " x ")) << num2 << "? ";
                cin >> userAnswer;

                if (userAnswer != answer) {
                    cout << "Incorrect. Restarting test." << endl;
                    goto start;
                }

                if (i == 0)
                    answer1 = answer;
                else if (i == 1)
                    answer2 = answer;
                else
                    answer3 = answer;
            }

            // Final Sum Question
            calculatedSum = answer1 + answer2 + answer3;
            cout << "What is the sum of your three answers? ";
            cin >> userAnswer;

            if (userAnswer != calculatedSum) {
                cout << "Incorrect! The correct total is: " << calculatedSum << endl;
                goto start;
            }
            cout << "        O        " << endl;
            cout << "       /|\\       " << endl;
            cout << "      / | \\       " << endl;
            cout << "     /  |  \\       " << endl;
            cout << "       / \\       " << endl;
            cout << "      /   \\     " << endl;
            cout << "     /     \\     " << endl;
            cout << "Well done! The chest code is *debugthugs*." << endl;
            goto chestcode;
        }
        else if (gameChoice == "word") {
        wordgame:
            cout << "Guess the word:" << endl;

            // Easy level
            cout << "easy: A red, green, or yellow sweet fruit." << endl;
            cin >> guess1;
            if (guess1 != word1) {
                cout << "Incorrect! Try again." << endl;
                goto wordgame;
            }

            // Medium level
            cout << "medium: A device, often referred to as a *portable computer*." << endl;
            cin >> guess2;
            if (guess2 != word2) {
                cout << "Incorrect! Try again." << endl;
                goto wordgame;
            }

            // Hard level
            cout << "hard: All of the people born and living at about the same time." << endl;
            cin >> guess3;
            if (guess3 != word3) {
                cout << "Incorrect! Try again." << endl;
                goto wordgame;
            }

            // Extreme level
            cout << "extreme: A confusing and difficult problem or question." << endl;
            cin >> guess4;
            if (guess4 != word4) {
                cout << "Incorrect! Try again." << endl;
                goto wordgame;
            }

            // Final level
            cout << "final: Something mysterious or difficult to interpret." << endl;
            cin >> guess5;
            if (guess5 != word5) {
                cout << "Incorrect! Try again." << endl;
                goto wordgame;
            }
            cout << "        O        " << endl;
            cout << "       /|\\       " << endl;
            cout << "      / | \\       " << endl;
            cout << "     /  |  \\       " << endl;
            cout << "       / \\       " << endl;
            cout << "      /   \\     " << endl;
            cout << "     /     \\     " << endl;
            cout << "Well done! The chest code is *debugthugs*." << endl;
            goto chestcode;
        }
        else if (gameChoice == "guess") {
        guessgame:
            // Guess the Number Game
            randomNumber = rand() % 30 + 1; // Generate random number between 1 and 100
            cout << "I have a number between 1 and 30. Try to guess it!" << endl;

            while (true) {
                cout << "Enter your guess: ";
                cin >> userGuess;

                if (userGuess < randomNumber) {
                    cout << "Too low! Try again." << endl;
                }
                else if (userGuess > randomNumber) {
                    cout << "Too high! Try again." << endl;
                }
                else {
                    cout << "        O        " << endl;
                    cout << "       /|\\       " << endl;
                    cout << "      / | \\       " << endl;
                    cout << "     /  |  \\       " << endl;
                    cout << "       / \\       " << endl;
                    cout << "      /   \\     " << endl;
                    cout << "     /     \\     " << endl;
                    cout << "Congratulations! You guessed the number." << endl;

                    cout << "The chest code is *debugthugs*." << endl;
                    goto chestcode;
                }
            }
        }
        else {
            cout << "Invalid choice! Restarting test." << endl;
            goto start;
        }
    }
    else {
        cout << "Invalid choice! Try again." << endl;
        goto start;
    }

    return 0;
}