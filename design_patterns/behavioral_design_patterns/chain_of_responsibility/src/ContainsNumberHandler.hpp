#pragma once

#include <string>

#include "BaseHandler.hpp"

/**
 * @class ContainsNumberHandler
 * @brief A concrete handler that checks if a password contains a number
 *
 * This class is a concrete handler that checks if a password contains a number.
 * If the password does not contain a number, the request is not processed.
 */
class ContainsNumberHandler : public BaseHandler
{
public:
    /**
     * @brief Process the request
     * @param password The request to be processed
     * @return True if the request was processed, false otherwise
     */
    bool Handle(const Password& password) override {
        if (password.GetPassword().find_first_of("0123456789") == std::string::npos) {
            std::cerr << "Error: Password must contain at least one number.\n";
            return false;
        }
        return BaseHandler::Handle(password);
    }
};
