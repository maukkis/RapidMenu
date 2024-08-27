#include <iostream>
#include <filesystem>
#include <string>
void checkIfExtractionFailed();
inline void clearBuffer();

void getConfigAndCheck(std::string &bconfigfile){
    while (true) {
        // check if the file is valid
        if(std::filesystem::exists(bconfigfile) && std::filesystem::is_regular_file(bconfigfile)){
            break;
        }
        std::cout << "Invalid config file: " << bconfigfile << ' ';
        std::cout << "Please enter a valid config: ";
        std::cin >> bconfigfile;
        checkIfExtractionFailed();
        clearBuffer(); // clear extra input if entered
          }
 }
