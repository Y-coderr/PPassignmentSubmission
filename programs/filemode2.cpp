#include <iostream> //to write and read the content in file
#include <fstream>
using namespace std;
int main() {
fstream my_file; //open a new file in the write mode
my_file.open("my_file", ios::out); 
if (!my_file) {
cout << "File not created!";}
else {
cout << "File created successfully!";
my_file.close(); 
}return 0;
}
