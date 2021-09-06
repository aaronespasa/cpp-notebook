#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // Creating an Input Stream Object
    std::string file_path = "files/1.board";
    std::ifstream my_file;
    my_file.open(file_path);
    
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        
        // Reading Data from the Stream
        std::string line;
        while(getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }


}