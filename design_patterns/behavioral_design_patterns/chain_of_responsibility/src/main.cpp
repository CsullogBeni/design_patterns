#include <iostream>
#include <memory>

#include "Password.hpp"
#include "ContainsOnlyEnglishLettersHandler.hpp"
#include "ContainsSpecialCharacterHandler.hpp"
#include "ContainsNumberHandler.hpp"    
#include "MinLenghtHandler.hpp"


/**
 * @brief The main function of the program.
 *
 * This function is the entry point of the program.
 * It creates a chain of responsibility of handlers and
 * tests the chain with different passwords.
 *
 * @return 0 if the program runs without errors.
 */
int main(){

    auto minLenghtHandler = std::make_shared<MinLenghtHandler>(8);
    auto containsNumberHandler = std::make_shared<ContainsNumberHandler>();
    auto containsOnlyEnglishLetters = std::make_shared<ContainsOnlyEnglishLettersHandler>();
    auto containsSpecialCharacterHandler = std::make_shared<ContainsSpecialCharacterHandler>();

    minLenghtHandler->SetNext(containsNumberHandler);
    containsNumberHandler->SetNext(containsOnlyEnglishLetters);
    containsOnlyEnglishLetters->SetNext(containsSpecialCharacterHandler);

    Password password("Jolvanezigy1$9", true);

    if (minLenghtHandler->Handle(password)) {
        std::cout << "Password is valid.\n";
    }
    else {
        std::cout << "Password is not valid.\n";
    }

    password = Password("JólVanEzÍgy$9", true);

    if (minLenghtHandler->Handle(password)) {
        std::cout << "Password is valid.\n";
    }
    else {
        std::cout << "Password is not valid.\n";
    }

    password = Password("JólVanEzÍgy$9", false);

    if (minLenghtHandler->Handle(password)) {
        std::cout << "Password is valid.\n";
    }
    else {
        std::cout << "Password is not valid.\n";
    }

    return 0;
}