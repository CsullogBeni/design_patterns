#pragma once

#include <string>

#include "BaseHandler.hpp"

/**
 * @class MinLenghtHandler
 * @brief A concrete handler that checks the length of a password
 *
 * This class is a concrete handler that checks the length of a password.
 * If the length of the password is less than the minimal length, the
 * request is not processed.
 */
class MinLenghtHandler : public BaseHandler
{
private:
    /**
     * @brief The minimal length of the password
     */
    size_t minLength;
public:
    /**
     * @brief Constructor
     * @param minLength The minimal length of the password
     */
    explicit MinLenghtHandler(size_t minLength) : minLength(minLength) {}

    /**
     * @brief Process the request
     * @param password The request to be processed
     * @return True if the request was processed, false otherwise
     */
    bool Handle(const Password &password) override {
        if (password.GetPassword().length() < minLength) {
            std::cout << "Password too short" << std::endl;
            return false;
        }
        return BaseHandler::Handle(password);
    }
};
