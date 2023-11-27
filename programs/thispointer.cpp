// program for this pointer 
#include <iostream>
class MyClass {
public:
 void printAddress() {
 std::cout << "Object address: " << this << std::endl;
 }
 void printMemberValue() {
 std::cout << "Member value: " << memberVar << std::endl;
 }
private:
 int memberVar = 42;
};
int main() {
 MyClass obj1;
 MyClass obj2;
 obj1.printAddress(); // Prints the address of obj1
 obj2.printAddress(); // Prints the address of obj2
 obj1.printMemberValue(); // Prints the member value of obj1 using the this pointer
return 0;
}
