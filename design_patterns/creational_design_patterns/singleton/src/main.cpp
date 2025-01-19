#include <iostream>
#include "Logger.hpp"


/**
 * @brief This is the main entry point of the application.
 *
 * This function demonstrates the usage of the Logger class.
 * It first creates an instance of the Logger class using the GetInstance()
 * method and logs some messages. Then it retrieves the list of all logged
 * messages using the GetLogs() method and prints them to the console.
 * It also demonstrates that the Logger class is a Singleton class by
 * creating another instance of the class and retrieving the same list of
 * logged messages. Finally, it deletes the second instance of the class.
 */
int main() {
    Logger* logger = Logger::GetInstance();
    logger->LogInfo("Hello World!");
    logger->LogError("This is an error!");
    logger->LogWarning("This is a warning!");
    std::list<std::string> logs = logger->GetLogs();
    for (std::string log : logs) {
        std::cout << log << std::endl;
    }

    std::cout << std::endl;

    Logger* logger2 = Logger::GetInstance();
    std::list<std::string> logs2 = logger2->GetLogs();
    for (std::string log : logs2) {
        std::cout << log << std::endl;
    }

    delete logger2;
    
    return 0;
}