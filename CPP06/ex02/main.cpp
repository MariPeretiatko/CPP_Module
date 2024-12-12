//
// Created by mperetia on 10.12.24.
//

#include <iostream>
#include "Base.hpp"
#include <typeinfo>
#include <cstdlib>
#include <ctime>


Base * generate(void){
  int luck = rand() % 3;
  std::cout << luck << std::endl;
  if(luck == 0)
    return new A();
  if(luck == 1)
    return new B();
  if(luck == 2)
  	return new C();
  return NULL; //?
}

void identify(Base* p){
  std::cout << GREEN << "=== Identify PTR ===" << RESET << std::endl;
  if(dynamic_cast<A*>(p)){
    std::cout << BRIGHT_MAGENTA << "Type: A" << RESET << std::endl;
  }else if(dynamic_cast<B*>(p)){
    std::cout << BRIGHT_MAGENTA << "Type: B" << RESET << std::endl;
  }else if(dynamic_cast<C*>(p)){
    std::cout << BRIGHT_MAGENTA << "Type: C" << RESET << std::endl;
  }else{
    std::cout << RED << "Unknown type" << RESET << std::endl;
  }
}
//
void identify(Base& p){

  std::cout << BLUE << "=== Identify REF ===" << RESET << std::endl;

  try {
        A& a = dynamic_cast<A&>(p);
        std::cout << BRIGHT_MAGENTA << "Type: A" << RESET << std::endl;
        static_cast<void>(a);
        return;
    } catch (const std::bad_cast&) {}

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << BRIGHT_MAGENTA << "Type: B" << RESET << std::endl;
        static_cast<void>(b);
        return;
    } catch (const std::bad_cast&) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << BRIGHT_MAGENTA << "Type: C" << RESET << std::endl;
        static_cast<void>(c);
        return;
    } catch (const std::bad_cast&) {}

    std::cout << RED << "Unknown type" << RESET << std::endl;
}

int main(){
  srand (time(0));

  Base * base;
  base = generate();
//  std::cout << typeid(*base).name() << std::endl;
  identify(base);
  identify(*base);


  Base *base2 = new B();
  identify(base2);
  identify(*base2);


//  std::cout << typeid(*base2).name() << std::endl;


  return 0;
}