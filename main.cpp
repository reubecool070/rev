#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        cout << "Not output given, program closed" << "\n";
        return 1;
    }
    
    fs::path dir_path = ".rev";
    fs::path dir_object = "./.rev/objects";
    fs::path dir_ref = "./.rev/refs";
    
    
    if (string(argv[1]) == "init") {
        // create directory
        fs::create_directory(dir_path);
        fs::create_directory(dir_object);
        fs::create_directory(dir_ref);
        
        // create a head file to track latest commit
        ofstream HEADFile("./.rev/HEAD");

        if(!HEADFile) {
            cout << "Unable to create a HEAD file\n";
            return 1;
        }

        HEADFile << "ref: refs/heads/master\n";
        HEADFile.close();
        
        cout << "Initialized rev directory";

    }
    return 0;
}