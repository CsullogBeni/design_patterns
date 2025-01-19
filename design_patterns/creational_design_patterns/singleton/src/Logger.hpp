#pragma once

#include <iostream>
#include <list>
#include <ctime>


/**
 * @brief This class is a Singleton class that provides a logger functionality.
 * It provides methods to log information, errors and warnings. It also provides
 * a method to get the list of all logged messages.
 *
 * @details The logger class is a Singleton class, meaning that only one
 * instance of the class can be created. The constructor of the class is
 * private, so it cannot be used to create an instance of the class.
 * The class provides a static method GetInstance() that can be used to
 * get the instance of the class. The class also provides methods to log
 * information, errors and warnings. The methods are LogInfo(), LogError()
 * and LogWarning(). The class also provides a method to get the list of all
 * logged messages. The method is GetLogs().
 */
class Logger {
protected:

    /**
     * @brief The instance of the class.
     */
    static Logger* instance;

    /**
     * @brief The list of logged messages.
     */
    static std::list<std::string> logs;

    /**
     * @brief The constructor of the class.
     */
    Logger();

    /**
     * @brief Get the Date Time object
     * 
     * @param category The category of the message
     * @return std::string The date and time with the message
     */
    static std::string GetDateTime(std::string category);

public:

    /**
     * @brief The copy constructor of the class.
     */
    Logger(Logger &other) = delete;

    /**
     * @brief The copy assignment operator of the class.
     */
    void operator=(const Logger &other) = delete;

    /**
     * @brief The static method to get the instance of the class.
     *
     * @return The instance of the class.
     */
    static Logger* GetInstance();

    /**
     * @brief The method to log information.
     *
     * @param message The message to be logged.
     */
    void LogInfo(std::string message);

    /**
     * @brief The method to log errors.
     *
     * @param message The message to be logged.
     */
    void LogError(std::string message);

    /**
     * @brief The method to log warnings.
     *
     * @param message The message to be logged.
     */
    void LogWarning(std::string message);

    /**
     * @brief The method to get the list of all logged messages.
     *
     * @return The list of all logged messages.
     */
    std::list<std::string> GetLogs();
};
