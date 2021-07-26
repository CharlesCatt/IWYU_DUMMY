#include <boost/format>
#include <boost/exception>
#include <string>


class Dog
{
    Dog()
    {
        age = 0;
        number_of_paws = 4;
    }
    Dog(std::string name_, int age_, int number_of_paws)
    {
        name = name_;
        if (age >= 0)
        {
            age = age_;
        }
        else
        {
            age = 0;
        }

        if (age >= 0)
        {
            number_of_paws = number_of_paws_;
        }
        else
        {
            number_of_paws = 0;
        }
    }
    ~Dog();
    void bark()
    {
        std::cout << "woof - " << std::endl;
    }
    std::string get_info();

private:
    std::string name;
    int age;
    int number_of_paws;
}
