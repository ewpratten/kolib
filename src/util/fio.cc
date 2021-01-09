#include "fio.hh"

#include <fstream>
#include <iostream>
#include <stdexcept>

template<typename T>
T kobo::util::readFromFile(std::string path) {
    // Fetch the file
    std::fstream file(path, std::ios_base::in);

    // If there is an issue with the file, throw an exception
    if (!file.good()) {
        throw std::runtime_error("Failed to open file: " + path);
    }

    // Get file contents
    T result;
    file >> result;

    return result;
}