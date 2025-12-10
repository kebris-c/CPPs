#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), nextIndex(0) {}

void	PhoneBook::addContact(const Contact &c)
{
	contacts[nextIndex] = c;
	nextIndex = (nextIndex + 1) % 8;
	if (contactCount < 8)
		contactCount++;
}

Contact	PhoneBook::getContact(int index) const { return contacts[index]; }
int		PhoneBook::getContactCount() const { return contactCount; }
