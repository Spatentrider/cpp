#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	// std::cout << "\033[33m" << "Cure: costructor called" << "\033[0m" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria("cure") {
	*this = src;
	// std::cout << "\033[33m" << "Cure: copy constructor called" << "\033[0m" << std::endl;
}

Cure	&Cure::operator=(const Cure &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure() {
	// std::cout << "\033[33m" << "Cure: desctructor called" << "\033[0m" << std::endl;
}

AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use( ICharacter &target ) {
	std::cout << "\033[33m" << "* heals " << target.getName() << "'s wounds *" << "\033[0m" << std::endl;
}
