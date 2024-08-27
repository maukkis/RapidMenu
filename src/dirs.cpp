#include <iostream>
#include <string>
#include <filesystem>
#include <ios>
// fix this later
void createBinDir(const std::string &userHome){
        std::string bindir {userHome + "/.local/bin"};
        if (std::filesystem::exists(bindir) &&
            std::filesystem::is_directory(bindir)) {
        } else {
            std::string createbindir = "mkdir -p " + bindir;
            system(createbindir.c_str());
            std::cerr << "Setting up bin dir.";
        }

}