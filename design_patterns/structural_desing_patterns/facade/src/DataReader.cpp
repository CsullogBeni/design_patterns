#include "DataReader.hpp"


/**
 * @brief Reads the data from a csv file.
 *
 * This method reads the data from a file and stores it in a list of floats.
 * The file is expected to be a CSV file where the first line is a header.
 * The method checks if the file can be opened and if it is empty. If the
 * file can not be opened, an error message is printed to the standard error
 * output. If the file is empty, the method returns an empty list of floats.
 * The method reads the file line by line and splits each line into individual
 * cells by using the semicolon as a separator. The method then converts each
 * cell to a float and stores it in a list of floats. The method also checks
 * if the conversion to float is successful and if not, an error message is
 * printed to the standard error output. Finally, the method returns the list
 * of floats.
 *
 * @param fileName The name of the file to read from.
 * @return A list of floats containing the data from the file.
 */
std::list<std::list<float>> DataReader::ReadData(std::string fileName) {
    std::list<std::list<float>> data;
    std::ifstream file(fileName);
    
    if(!file.is_open()) {
        std::cerr << "Error: Could not open file " << fileName << std::endl;
        return data;
    }

    std::string line;
    bool isHeader = true;

    while (std::getline(file, line)) {
        if (isHeader) {
            isHeader = false;
            continue;
        }

        std::stringstream ss(line);
        std::string cell;
        std::list<float> row;

        while (std::getline(ss, cell, ';')) {
            try {
                row.push_back(std::stof(cell));
            } catch (const std::invalid_argument& e) {
                std::cerr << "Error: Invalid data in file " << fileName << std::endl;
            }
        }
        data.push_back(row);

    }

    file.close();
    return data;
}