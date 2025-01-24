#pragma once

#include <string>

#include "BaseHandler.hpp"

/**
 * @class ContainsSpecialCharacterHandler
 * @brief A concrete handler that checks if a password contains a special character
 *
 * This class is a concrete handler that checks if a password contains a special character.
 * If the password does not contain a special character, the request is not processed.
 */
class ContainsSpecialCharacterHandler : public BaseHandler
{
public:
    /**
     * @brief Process the request
     * @param password The request to be processed
     * @return True if the request was processed, false otherwise
     */
    bool Handle(const Password& password) override {
        if (password.GetPassword().find_first_of("!@#$%^&*()-_=+[]{}|;:,.<>?/") == std::string::npos) {
            std::cerr << "Error: Password must contain at least one special character.\n";
            return false;
        }
        return BaseHandler::Handle(password);
    }
};
