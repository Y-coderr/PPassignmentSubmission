#include <iostream>
#include <fstream>
using namespace std;
int main() {
// Create an ofstream object
ofstream outfile("example.txt");
// Check if the file was opened
Successfully
if (outfile.is_open()) {
// Write some data to the file
outfile << "Hello, world!";
// Close the file
outfile.close();
else {
// Handle error
cout << "Error opening file“
<< endl;
}
return 0;
}
