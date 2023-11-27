#include <iostream>
#include <fstream>  // Required for file I/O
Using namespace std;
int main() {
ofstream outFile("example.txt");  // Creating an output file stream
// Checking if the file is successfully opened
if (outFile.is_open()) {
outFile << "Hello, World!" << endl;   // Writing data to the file
outFile.close();  // Closing the file
} else {
cout << "Unable to open the file." << endl;
}
return 0;
}
