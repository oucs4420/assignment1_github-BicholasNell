#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    ifstream myfile;
    string tmp;
    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg){ //start at 1 to get file names
            //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        int lineCount = 0; // initialize count at 0
        myfile.open(argv[arg]); //open file
        while(getline(myfile, tmp)){ //until end of file
            lineCount++;
        }
        cout << argv[arg] << ": " << lineCount << endl; // print out to console
    }

    

    exit(0); // this means that the program executed correctly!
}
