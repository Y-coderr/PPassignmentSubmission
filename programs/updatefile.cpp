#include <iostream>
#include <fstream>
using namespace std;
int main() {
  // Create an ifstream object to read the current contents of the file
  ifstream fin("original.txt", ios::in);
  // Check if the file is open
  if (!fin.is_open()) {
    cerr << "Error opening file" << endl;
    return 1;
  }

  // Create an ofstream object to write the updated contents to the file
  ofstream fout("updated.txt", ios::out);
// Read the current contents of the file line by line
  string line;
  while (getline(fin, line)) {
string newLine = line + " - updated";

    // Write the modified line to the output file
    fout << newLine << endl;
  }

  // Close the input and output files
  fin.close();
  fout.close();

  return 0;
