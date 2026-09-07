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
    fs::path dir_object = "./rev/objects";
    fs::path dir_ref = "./rev/refs";
    

    if (string(argv[1]) == "init") {
        // create directory
        fs::create_directory(dir_path);
        fs::create_directory(dir_object);
        fs::create_directory(dir_ref);
        cout << "Initialized rev directory";

    }
    return 0;
}