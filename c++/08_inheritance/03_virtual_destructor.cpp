/**
 * @file 03_virtual_destructor.cpp
 * @author Alberto Sartori
 * @brief 
 * @version 0.1
 * @date 2021-11-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>

struct Base {
  Base() { std::cout << "Base\n"; }
  // ~Base() { std::cout << "~Base\n"; }
  virtual ~Base() { std::cout << "~Base\n"; } //dynamic binding 

};

struct Derived : public Base {
  Derived() { std::cout << "Derived\n"; }
  ~Derived() { std::cout << "~Derived\n"; }
};

int main() {
  { Derived d; }

  std::cout << "\n\npointers\n";
  Base* p = new Derived;
  delete p;

  return 0;
}
