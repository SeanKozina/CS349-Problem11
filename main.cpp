#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " input_file output_file" << std::endl;
        return 1;
    }

    std::string input_file_name = argv[1];
    std::string output_file_name = argv[2];

    std::ifstream input_file("/Users/student/CLionProjects/Chess/inputfile.txt");
    if (!input_file) {
        std::cerr << "Error: could not open input file '" << input_file_name << "'" << std::endl;
        return 1;
    }
    

    /*
    std::string move_str;
    while (input_file >> move_str) {


        }
    }
    */


    return 0;
}

