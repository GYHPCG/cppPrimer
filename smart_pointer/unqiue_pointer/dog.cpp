#include "dog.h"
dog::dog(std::string name,int age):name(name),age(age){
    std::cout << "constructor of dog:  " << name << " "<< age <<std::endl;
}
dog::~dog() {
    std::cout << "destructor is called  " << name << " " << age << std::endl;
}

