#include "Logger.hpp"


/**
 * @brief Pointer to the instance of the Logger class.
 *
 * This pointer is used to store the instance of the Logger class.
 * It is a static member of the class and is used to implement the Singleton
 * design pattern.
 */
Logger* Logger::instance = nullptr;

/**
 * @brief List of logged messages.
 *
 * This list stores all the logged messages. It is a static member of the
 * class and is used to store all the messages that are logged by the Logger
 * class.
 */
std::list<std::string> Logger::logs;

/**
 * @brief Private constructor of the Logger class.
 *
 * This constructor initializes the logs list.
 */
Logger::Logger() {
    logs = std::list<std::string>();
}

/**
 * @brief Get the current date and time as a string.
 *
 * This method returns a string that contains the current date and time
 * in the format "YYYY-MM-DD HH:MM:SS".
 *
 * @param category The category of the log message.
 * @return A string that contains the current date and time.
 */
std::string Logger::GetDateTime(std::string category) {
     time_t now = time(0);
    tm *ltm = localtime(&now);
    char time_buffer[30];
    strftime(time_buffer, sizeof(time_buffer), "%Y-%m-%d %H:%M:%S", ltm);
    std::string date_time(time_buffer);
    return "[" + category + " - " + date_time + "]: ";
}

/**
 * @brief Get the instance of the Logger class.
 *
 * This method returns the instance of the Logger class. If the instance
 * is null, it creates a new instance of the Logger class.
 *
 * @return The instance of the Logger class.
 */
Logger* Logger::GetInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }
    return instance;
}

/**
 * @brief Log an info message.
 *
 * This method logs an info message to the console and adds it to the
 * logs list.
 *
 * @param message The message to log.
 */
void Logger::LogInfo(std::string message) {
    message = GetDateTime("INFO") + message;
    std::cout <<  message << std::endl;
    logs.push_back(message);
}

/**
 * @brief Log an error message.
 *
 * This method logs an error message to the console and adds it to the
 * logs list.
 *
 * @param message The message to log.
 */
void Logger::LogError(std::string message) {
    message = GetDateTime("ERROR") + message;
    std::cout <<  message << std::endl;
    logs.push_back(message);
}

/**
 * @brief Log a warning message.
 *
 * This method logs a warning message to the console and adds it to the
 * logs list.
 *
 * @param message The message to log.
 */
void Logger::LogWarning(std::string message) {
    message = GetDateTime("WARNING") + message;
    std::cout <<  message << std::endl;
    logs.push_back(message);
}

/**
 * @brief Get the list of all logged messages.
 *
 * This method returns the list of all logged messages.
 *
 * @return The list of all logged messages.
 */
std::list<std::string> Logger::GetLogs() {
    return logs;
}
