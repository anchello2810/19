

#include <iostream>
class Animal
{
public:
    virtual void Voice() {}

};
class Dog :public Animal
{
    void Voice() override
    {
        std::cout << "Woof\n";
    }
};
class Cat :public Animal
{
    void Voice() override
    {
        std::cout << "Meow\n";
    }
};
class Cow :public Animal
{
    void Voice() override
    {
        std::cout << "Mooo\n";
    }
};
int main()
{
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (Animal* a : animals)
        a->Voice();
}


