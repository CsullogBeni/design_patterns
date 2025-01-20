#include "DataBase.hpp"


/**
 * @brief Constructor.
 *
 * The constructor for the DataBase class.
 */
DataBase::DataBase() {
    data = std::list<float>();
}

/**
 * @brief Destructor.
 *
 * The destructor for the DataBase class.
 */
DataBase::~DataBase() {}

/**
 * @brief Add a data item to the database.
 * @param data The data item to add.
 */
void DataBase::AddData(float data) {
    this->data.push_back(data);
}

/**
 * @brief Add multiple data items to the database.
 * @param data The list of data items to add.
 */
void DataBase::AddData(std::list<float> data) {
    this->data.insert(this->data.end(), data.begin(), data.end());
}

/**
 * @brief Get a data item from the database.
 * @param index The index of the data item to retrieve.
 * @return The data item at the specified index.
 */
float DataBase::GetData(int index) {
    if (index < data.size()) {
        auto it = data.begin();
        std::advance(it, index);
        return *it;
    }
    else
        throw std::out_of_range("Index out of range");
}

/**
 * @brief Get all the data items from the database.
 * @return A list of all the data items in the database.
 */
std::list<float> DataBase::GetAllData() {
    return data;
}

/**
 * @brief Clear all the data items from the database.
 */
void DataBase::ClearData() {
    data.clear();
}
