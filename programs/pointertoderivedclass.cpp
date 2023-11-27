#include <iostream>
class Base {
public:
 virtual void display() {
 std::cout << "Base class" << std::endl;
 }
};
class Derived : public Base {
public:
 void display() override {
 std::cout << "Derived class" << std::endl;
 }
};
int main() {
 Base baseObj;
 Derived derivedObj;
 Base* basePtr = &baseObj;
 Base* derivedPtr = &derivedObj;
 // Calling the display function through base class pointer
 basePtr->display(); // Output: "Base class"
 // Calling the display function through derived class pointer
 derivedPtr->display(); // Output: "Derived class"
 return 0;
}
