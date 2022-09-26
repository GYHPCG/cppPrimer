#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
class dog {
    private:
    std::string name;
    int age;
    public:
    dog()=default;
    dog(std::string name,int age);
    /// @brief 
    ~dog();
    void get_info() {
        std::cout << "dog name: " << name <<" " << "dog age: " << age << std::endl;
    }
    void set_name(std::string name) {
        this->name = name;
    }

};
#endif
