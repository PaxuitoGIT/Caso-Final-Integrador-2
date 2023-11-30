#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script =false) {
    std::ifstream file(filename);

    if (!file) {
        std::cout << "Error: could not open file " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (file.bad()) {
            std::cout << "Error: could not read file " << filename << std::endl;
            return;
        }

        if (show_script) {
            std::cout << line << std::endl;
        }
    }
}

void load_script() {
    std::string filename;
    std::cout << "Por favor, ingrese el nombre del archivo: ";
    std::cin >> filename;
    load_script(filename.c_str(),true);
}