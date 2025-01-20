#include "StatisticMakerController.hpp"
#include "StatisticMaker.hpp"
#include "DataReader.hpp"
#include "DataBase.hpp"


/**
 * @brief Constructor.
 *
 * The constructor of the class that initializes the statisticMaker, dataBase and
 * dataReader attributes.
 */
StatisticMakerController::StatisticMakerController() {
    this->statisticMaker = new StatisticMaker();
    this->dataReader = new DataReader();
    this->dataBase = new DataBase();
}

/**
 * @brief Destructor.
 *
 * The destructor of the class that releases the memory allocated for the
 * statisticMaker, dataBase and dataReader attributes.
 */
StatisticMakerController::~StatisticMakerController() {
    delete this->statisticMaker;
    delete this->dataReader;
    delete this->dataBase;
}

/**
 * @brief Creates statistics of the data from a CSV file.
 *
 * This method creates a data base, reads the data from a CSV file, calculates the
 * statistics of the data and prints them to the standard output.
 *
 * @param fileName The name of the file to read from.
 */
void StatisticMakerController::CreateStatistics(std::string fileName) {
    this->CreateDataBase();
    this->ReadData(fileName);
    this->CalculateStatistics();
}

/**
 * @brief Creates a data base.
 *
 * This method creates a data base and stores it in the dataBase attribute.
 */
void StatisticMakerController::CreateDataBase() {
    this->dataBase->ClearData();
}

/**
 * @brief Reads data from a CSV file.
 *
 * This method reads the data from a CSV file and stores it in the dataBase
 * attribute.
 *
 * @param fileName The name of the file to read from.
 */
void StatisticMakerController::ReadData(std::string fileName) {
    auto data = this->dataReader->ReadData(fileName);

    for (const auto& row : data) {
        for (float value : row) {
            this->dataBase->AddData(value);
        }
    }
}

/**
 * @brief Calculates the statistics of the data.
 *
 * This method calculates the statistics of the data stored in the dataBase
 * attribute and stores it in the statisticMaker attribute.
 */
void StatisticMakerController::CalculateStatistics() {
    if (this->dataBase->GetAllData().empty()) {
        std::cout << "No data to calculate statistics." << std::endl;
        return;
    }
    std::cout << "Average: " << this->statisticMaker->GetAverage(*this->dataBase) << std::endl;
    std::cout << "Maximum: " << this->statisticMaker->GetMax(*this->dataBase) << std::endl;
    std::cout << "Minimum: " << this->statisticMaker->GetMin(*this->dataBase) << std::endl;
}

