#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void load_script(const char* filename, bool show_script =false) {
    ifstream file(filename);

    if (!file) {
        cout << "Error: could not open file " << filename << endl;
        return;
    }

    string line;
    while (std::getline(file, line)) {
        if (file.bad()) {
            cout << "Error: could not read file " << filename << endl;
            return;
        }

        if (show_script) {
            cout << line << endl;
        }
    }
}

void load_script() {
    string filename;
    cout << "Por favor, ingrese el nombre del archivo: ";
    cin >> filename;
    load_script(filename.c_str(),true);
}