#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    std::string filePath;
    std::cout << "Enter the path to the file: ";
    std::getline(std::cin, filePath);

    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    double eruptionTotal = 0.0;
    double waitTotal = 0.0;
    int count = 0;

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string eruptionStr, waitStr;

        if (std::getline(ss, eruptionStr, ',') && std::getline(ss, waitStr)) {
            try {
                double eruption = std::stod(eruptionStr);
                double wait = std::stod(waitStr);

                eruptionTotal += eruption;
                waitTotal += wait;
                count++;
            }
            catch (...) {
                std::cerr << "Skipping invalid data: " << line << std::endl;
            }
        }
    }

    file.close();

    if (count == 0) {
        std::cerr << "No valid data to process." << std::endl;
        return 1;
    }

    double avgEruption = eruptionTotal / count;
    double avgWait = waitTotal / count;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nThe average eruption length is " << avgEruption << " minutes." << std::endl;
    std::cout << "The average eruption wait time is " << avgWait << " minutes." << std::endl;

    return 0;
}
