#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


class grid{

public:
    vector<bool>


};









int main(int argc, char* argv[]) {
    // Check for correct number of arguments
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <input_file> <output_file>\n";
        return 1;
    }

    // Open input file
    ifstream input_file(argv[1]);
    if (!input_file.is_open()) {
        cout << "Unable to open input file.\n";
        return 1;
    }

    // Open output file
    ofstream output_file(argv[2]);
    if (!output_file.is_open()) {
        cout << "Unable to open output file.\n";
        return 1;
    }










    return 0;
}







