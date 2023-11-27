#include <fstream>
int main() 
{
  std::ofstream file("myfile.txt");
  file << "Hello, world!";
  file.close();
  return 0;
}
