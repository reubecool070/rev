#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        cout << "Not output given, program closed" << "\n";
        exit(1);
    }

    fs::path dir_path = ".rev";

    if (string(argv[1]) == "init") {
        // create directory
        cout << "Initialized rev directory";
    }
    return 0;
}