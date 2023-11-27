#include <iostream>
#include <fstream>
using namespace std;
int main() {
// Create an ifstream object
ifstream file("myfile.txt");
// Check if the file opened
Successfully
if (!file.is_open()) {
cout << "Error opening file“
<< endl;
return 1;
}
// Read the contents of the file
string line;while (getline(file, line)) {
cout << line << endl;
}
// Close the file
file.close();
return 0;
}
