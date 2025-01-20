#include <filesystem>
#include "StatisticMakerController.hpp"


namespace fs = std::filesystem;

/**
 * @brief Entry point of the application.
 *
 * This function is the entry point of the application. It gets the path of the
 * current script and reads the data from a CSV file in the same directory as
 * the script. It then creates an instance of the StatisticMakerController class
 * and calls the CreateStatistics method to create statistics of the data in the
 * CSV file.
 * 
 * The class represents the usage of a facade design pattern.
 */
int main(){
    fs::path scriptPath(__FILE__);
    fs::path scriptDir = scriptPath.parent_path();
    fs::path filePath = scriptDir / "data.csv";

    StatisticMakerController controller;
    controller.CreateStatistics(filePath.string());
    return 0;
}