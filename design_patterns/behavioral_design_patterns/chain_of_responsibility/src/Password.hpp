#pragma once

#include <iostream>


/**
 * @class Password
 * @brief A class representing a password.
 *
 * This class is used to store a password and check if it
 * contains only English letters.
 */
class Password
{
private:

    std::string password;

    /**
     * @brief If true, the password should contain only English letters.
     *
     * If true, the password should contain only English letters.
     * Otherwise, it can contain any characters.
     */
    bool useOnlyEnglishLetters;

public:

    /**
     * @brief Constructor.
     * @param password The password to store.
     * @param useOnlyEnglishLetters If true, the password should contain only English letters.
     *
     * This constructor creates a new Password object.
     */
    Password(std::string password, bool useOnlyEnglishLetters) : password(password), useOnlyEnglishLetters(useOnlyEnglishLetters) {};

    
    /**
     * @brief Get the password.
     * @return The password.
     */
    inline std::string GetPassword() const { return password; }
    
    /**
     * @brief Get the value of use_only_english_letters.
     * @return True if the password should contain only English letters.
     */
    inline bool GetUseOnlyEnglishLetters() const { return useOnlyEnglishLetters; }
};
