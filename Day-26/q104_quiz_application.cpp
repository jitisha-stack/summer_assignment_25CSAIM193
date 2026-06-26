#include <iostream>

int main() {
    char ans;
    int score = 0;

    // question 1
    std::cout << "Q1. What is the capital of India?\n";
    std::cout << "a) Mumbai \nb) Delhi\nc) Kolkata\nd) Chennai\n";
    std::cout << "Enter answer : ";
    std::cin >> ans;

    if (ans == 'b' || ans == 'B')
        score++;

    // question 2
    std::cout << "\nQ2. Which language is used for OOP?\n";
    std::cout << "a) C++\nb) HTML\nc) SQL\nd) CSS\n";
    std::cout << "Enter answer: ";
    std::cin >> ans;

    if (ans == 'a' || ans == 'A')
        score++;

    // question 3
    std::cout << "\nQ3. How many days are there in a week?\n";
    std::cout << "a) 5\nb) 6\nc) 7\nd) 8\n";
    std::cout << "Enter answer: ";
    std::cin >> ans;
    if (ans == 'c' || ans == 'C')
        score++;


    //question 4
    std::cout << "\nQ4. Who is known as the Father of Computers?\n";
    std::cout << "a) Charles Babbage\nb) Albert Einstein\nc) Newton\nd) Edison\n";
    std::cout << "Enter answer: ";
    std::cin >> ans;
    if (ans == 'a' || ans == 'A')
        score++;

       // question 5
    std::cout << "\nQ5. Which is the largest ocean in the world?\n";
    std::cout << "a) Atlantic Ocean\nb) Indian Ocean\nc) Arctic Ocean\nd) Pacific Ocean\n";
    std::cout << "Enter answer: ";
    std::cin >> ans;
    if (ans == 'd' || ans == 'D')
        score++;

    // Display final score
    std::cout << "\n Final Score is! " << score << "/5";

    return 0;
}