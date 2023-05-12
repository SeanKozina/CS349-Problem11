#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


class Grid{

public:
    vector<vector<int>> grid;

    int grid_h(){
        return grid.size();
    }

    int grid_w(){
        return grid[0].size();
    }

    void set_row(int row_coord, int value){
        for (int i = 0; i < grid[row_coord].size(); i++){
            grid[row_coord][i] = value;
        }
    }

    void set_grid(int value){
        for (int i = 0; i < grid.size(); i++){
            set_row(i, value);
        }
    }

    void create_grid(int radius){
        int grid_width = (2*radius) + 1;
        int grid_height = (2*radius) + 1;

        vector<vector<int>> newGrid;
        for (int i = 0; i < grid_height; i++){
            // create a new row
            vector<int> newRow;
            for (int k = 0; k < grid_width; k++){
                newRow.push_back(0);
            }
            // push row
            newGrid.push_back(newRow);
        }

        grid = newGrid;
    }


    void print_grid(){
        for (int i = 0; i < grid_h(); i++){
            // create a new row
            vector<int> newRow;
            for (int k = 0; k < grid_w(); k++){
                cout << "■ ";
            }
            // push row
            cout << "\n";
        }
    }

};




class Ant{

public:

    int x, y;
    // can be "up" , "down" , "left" , "right"
    string direction;

    Ant(){
        x = 0;
        y = 0;
        direction = "up";
    }

    void print_ant(){
        cout << "Ant Information:\n";
        cout << "   x: " << x << endl << "   y: " << y << endl;
        cout << "Facing Direction: " << direction << endl;
    }

    void processAnt(Grid& grid){
        x = (grid.grid_h() - 1) / 2;
        y = x;
    }
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



    string line, radius, steps;

    while(getline(input_file,line)){
        std::string delimiter = " ";
        radius = line.substr(0, line.find(delimiter));
        steps = line.substr(line.find(delimiter) + 1);
    }

    Grid g;
    g.create_grid(stoi(radius));
    g.print_grid();
    cout << steps << endl;

    Ant a;
    a.print_ant();
    a.processAnt(g);
    a.print_ant();

    return 0;
}
