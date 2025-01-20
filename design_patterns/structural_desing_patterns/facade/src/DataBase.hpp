#pragma once

#include <iostream>
#include <list>


/**
 * @class DataBase
 * @brief Class used to store and retrieve data from a database.
 *
 * The DataBase class provides a way to store data in a database and to retrieve
 * the stored data. It also provides methods to add data to the database, to
 * retrieve a specific data item from the database, to retrieve all the data
 * items from the database, and to clear the database.
 */
class DataBase
{
private:
    std::list<float> data;
public:
    /**
     * @brief Constructor.
     *
     * The constructor for the DataBase class.
     */
    DataBase();
    /**
     * @brief Destructor.
     *
     * The destructor for the DataBase class.
     */
    ~DataBase();

    /**
     * @brief Add a data item to the database.
     * @param data The data item to add.
     */
    void AddData(float data);
    /**
     * @brief Add multiple data items to the database.
     * @param data The list of data items to add.
     */
    void AddData(std::list<float> data);

    /**
     * @brief Get a data item from the database.
     * @param index The index of the data item to retrieve.
     * @return The data item at the specified index.
     */
    float GetData(int index);
    /**
     * @brief Get all the data items from the database.
     * @return A list of all the data items in the database.
     */
    std::list<float> GetAllData();

    /**
     * @brief Clear all the data items from the database.
     */
    void ClearData();
};
