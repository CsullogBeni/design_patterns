#pragma once

#include <algorithm>

class DataBase;


/**
 * @class StatisticMaker
 * @brief Class to calculate statistics of data in a database.
 *
 * This class provides methods to calculate different statistics of data in a
 * database. It provides methods to calculate the average, maximum and minimum
 * values of data in the database.
 */
class StatisticMaker {
public:

    /**
     * @brief Constructor.
     */
    StatisticMaker() = default;

    /**
     * @brief Destructor.
     */
    ~StatisticMaker() = default;

    /**
     * @brief Calculates the average value of the data in the database.
     *
     * @param data The data base to calculate the average from.
     * @return The average value of the data in the database.
     */
    const float GetAverage(DataBase& data) const;

    /**
     * @brief Calculates the maximum value of the data in the database.
     *
     * @param data The data base to calculate the maximum from.
     * @return The maximum value of the data in the database.
     */
    const float GetMax(DataBase& data) const;

    /**
     * @brief Calculates the minimum value of the data in the database.
     *
     * @param data The data base to calculate the minimum from.
     * @return The minimum value of the data in the database.
     */
    const float GetMin(DataBase& data) const;
};
