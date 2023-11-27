#include <iostream>
#include <fstream>  // Required for file I/O
 
int main() {
    ifstream inFile("example.txt");      // Creating an input file stream
 
    // Checking if the file is successfully opened
    if (inFile.is_open()) {
         
        string line;    // Reading data from the file
        while (getline(inFile, line)) {
            cout << line << endl;
       }
}
inFile.close();    // Closing the file
    } else {
     cout << "Unable to open the file." << endl;
   }
 
 return 0;
}
