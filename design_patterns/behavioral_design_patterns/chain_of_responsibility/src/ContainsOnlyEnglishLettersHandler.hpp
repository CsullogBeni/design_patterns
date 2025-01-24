#pragma once

#include <string>

#include "BaseHandler.hpp"

/**
 * @class ContainsOnlyEnglishLettersHandler
 * @brief A concrete handler that checks if a password contains only English letters
 *
 * This class is a concrete handler that checks if a password contains only English letters.
 * If the password does not contain only English letters, the request is not processed.
 */
class ContainsOnlyEnglishLettersHandler : public BaseHandler
{
public:
    /**
     * @brief Process the request
     * @param password The request to be processed
     * @return True if the request was processed, false otherwise
     */
    bool Handle(const Password& password) override {
        if (password.GetUseOnlyEnglishLetters()) {    
            if (password.GetPassword().find_first_of("áéíóúóóüçÁÉÍÓÚÓÜÇ") != std::string::npos) {
                std::cerr << "Error: Password must contain only English letters.\n";
                return false;
            }
        }
        return BaseHandler::Handle(password);
    }
};
