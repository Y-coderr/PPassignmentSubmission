#include <iostream>
class MyClass {
public:
 void display() {
 std::cout << "Hello from MyClass!" << std::endl;
 }
};
int main() {
 // Allocate an object of MyClass on the heap
 MyClass* ptr = new MyClass;
 // Access the object's members using the pointer
ptr->display();
 // Don't forget to free the allocated memory when done
 delete ptr;
 return 0;
}
