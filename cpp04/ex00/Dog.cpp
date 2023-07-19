#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34m" << "Dog   : " << _type << " constructor called " << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "\033[34m" << "Dog   : " << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "\033[34m" << "Dog   : " << _type << " desctructor called" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "\033[34m" << "Dog   : " << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "\033[34m" << "Dog   : " << _type << ": Baauuuu Baauuu!!!" << "\033[0m" << std::endl;
}

