#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " constructor called " << "\033[0m" <<std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " desctructor called" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "\033[1;33m" << "Cat   : " << _type << ": Miaawww!!!" << "\033[0m" << std::endl;
}
