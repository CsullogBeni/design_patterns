#pragma once

#include <iostream>
#include <list>

class DataBase;
class StatisticMaker;
class DataReader;

/**
 * @class StatisticMakerController
 * @brief Facade class to create statistics of data from a CSV file.
 *
 * This class is the facade of the facade design pattern. It provides a simple
 * interface to create statistics of data from a CSV file. It encapsulates the
 * creation of a database, reading data from the CSV file, and calculating
 * statistics of the data.
 */
class StatisticMakerController {
private:

    /**
     * @brief The statistic maker.
     *
     * This attribute calculates the statistic maker.
     */
    StatisticMaker* statisticMaker;

    /**
     * @brief The data reader.
     * 
     * This attribute reads the data from a CSV file.
     */
    DataReader* dataReader;

    /**
     * @brief The data base.
     * 
     * This attribute stores the data base.
     */
    DataBase* dataBase;

    /**
     * @brief Creates a data base.
     *
     * This method creates a data base and stores it in the dataBase attribute.
     */
    void CreateDataBase();

    /**
     * @brief Reads data from a CSV file.
     * @param fileName The name of the file to read from.
     *
     * This method reads the data from a CSV file and stores it in the dataBase
     * attribute.
     */
    void ReadData(std::string fileName);

    /**
     * @brief Calculates the statistic of the data.
     *
     * This method calculates the statistic of the data stored in the dataBase
     * attribute and stores it in the statisticMaker attribute.
     */
    void CalculateStatistics();

public:

    /**
     * @brief Constructor.
     *
     * The constructor of the class that initializes the statisticMaker and
     * dataReader attributes.
     */
    StatisticMakerController();

    /**
     * @brief Destructor.
     *
     * The destructor of the class that releases the memory allocated for the
     * statisticMaker and dataReader attributes.
     */
    ~StatisticMakerController();
    
    /**
     * @brief Creates a statistic of the data from a CSV file.
     * @param fileName The name of the file to read from.
     *
     * This method creates a statistic of the data from a CSV file by calling
     * the CreateDataBase, ReadData, and CalculateStatistic methods.
     */
    void CreateStatistics(std::string fileName);
};
