#include <iostream>
class MyClass {
public:
 void display() {
 std::cout << "Hello from MyClass!" << std::endl;
}
};
int main() {
 // Declare an object of MyClass
 MyClass obj;
 // Declare a pointer to MyClass and initialize it with the address of the object
 MyClass* ptr = &obj;
 // Access the object's members using the pointer
 ptr->display(); // Calls the display() method of MyClass through the pointer
 return 0;
}
