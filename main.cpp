#include <iostream>
#include <stdlib.h>

using namespace std;

#include <time.h>

int main() {
    enum Figure {
        STONE = 1, SCISSORS, PAPER
    };
    int userFigure, botFigure, yourChoice;
    time_t t;
    bool goNext = false;
    do {
        srand((unsigned) time(&t));
        botFigure = rand() % 3 + 1;
        std::cout << "Choose your figure:" << endl;
        std::cout << "1-Stone" << endl;
        std::cout << "2-Scissors" << endl;
        std::cout << "3-Paper" << endl;
        std::cin >> userFigure;

        while (userFigure != 1 && userFigure != 2 && userFigure != 3) {
            std::cout << "Wrong input! Enter 1,2 or 3" << endl;
            std::cin >> userFigure;

        }
        if (botFigure == userFigure) {
            std::cout << "Draw!" << endl;
        }
        if (botFigure == STONE && userFigure == SCISSORS) {
            std::cout << "Scissors!" << endl;
            std::cout << "I've picked Stone. You lose." << endl;
        }
        if (botFigure == STONE && userFigure == PAPER) {
            std::cout << "Paper!" << endl;
            std::cout << "I've picked Stone. You win!" << endl;
        }
        if (botFigure == SCISSORS && userFigure == STONE) {
            std::cout << "Stone!" << endl;
            std::cout << "I've picked Scissors. You win!" << endl;
        }
        if (botFigure == SCISSORS && userFigure == PAPER) {
            std::cout << "Paper!" << endl;
            std::cout << "I've picked Scissors. You lose." << endl;
        }
        if (botFigure == PAPER && userFigure == STONE) {
            std::cout << "Stone!" << endl;
            std::cout << "I've picked Paper. You lose." << endl;
        }
        if (botFigure == PAPER && userFigure == SCISSORS) {
            std::cout << "Scissors!" << endl;
            std::cout << "I've picked Paper. You win!" << endl;
        }
        do {
            std::cout << "Do you want to play more?" << endl;
            std::cout << "1-Yes!" << endl;
            std::cout << "2-No!" << endl;
            std::cin >> yourChoice;
        } while (yourChoice != 1 && yourChoice != 2);
        if(yourChoice==1){
            goNext=true;
        }
        if(yourChoice==2){
            goNext=false;
        }
    } while (goNext);

}