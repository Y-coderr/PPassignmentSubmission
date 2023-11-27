#include <iostream>
#include <fstream>
using namespace std;
int main() {
// Create an object of the fstream
Class
fstream file;
// Open the file for reading
file.open("myfile.txt", ios::in);
// Check if the file was opened
Successfully
if (file.is_open()) {
// Read the contents of the file
string line;
while (getline(file, line))
{cout << line << endl
}
// Close the file
file.close();
} else {
// Handle error
cout << "Error opening file“
<< endl;
}
return 0;
}
