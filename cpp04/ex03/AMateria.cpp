#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria") {
	//std::cout << "AMateria: " << _type << " default constructor called" << std::endl;
}


AMateria::AMateria(std::string const &type) : _type(type) {
	//std::cout << "AMateria: " << _type << " type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {
	//std::cout << "AMateria: " << _type << " desctructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &other) {
	// std::cout << "AMateria: " << _type << " copy assignment operator called" << std::endl;
	if ( this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void	AMateria::use(ICharacter& other) {
	// std::cout << "AMateria " << _type << " used on " << other.getName() << std::endl;
}

AMateria	*AMateria::clone() const {
	return (AMateria*)this;
}

std::string const	&AMateria::getType() const {
	return (_type);
}
