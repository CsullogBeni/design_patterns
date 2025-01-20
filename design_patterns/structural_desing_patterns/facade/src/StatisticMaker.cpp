#include "StatisticMaker.hpp"
#include "DataBase.hpp"


/**
 * @brief Calculates the average value of the data in the database.
 *
 * @param data The data base to calculate the average from.
 * @return The average value of the data in the database.
 */
const float StatisticMaker::GetAverage(DataBase& data) const {
    float sum = 0.0;

    for (auto item : data.GetAllData()) {
        sum += item;
    }
    return sum / data.GetAllData().size();
}

/**
 * @brief Calculates the maximum value of the data in the database.
 *
 * @param data The data base to calculate the maximum from.
 * @return The maximum value of the data in the database.
 */
const float StatisticMaker::GetMax(DataBase& data) const {
    float max = data.GetAllData().front();
    for (auto item : data.GetAllData()) {
        if (item > max) {
            max = item;
        }
    }
    return max;
}

/**
 * @brief Calculates the minimum value of the data in the database.
 *
 * @param data The data base to calculate the minimum from.
 * @return The minimum value of the data in the database.
 */
const float StatisticMaker::GetMin(DataBase& data) const {
    float min = data.GetAllData().front();
    for (auto item : data.GetAllData()) {
        if (item < min) {
            min = item;
        }
    }
    return min;
}
