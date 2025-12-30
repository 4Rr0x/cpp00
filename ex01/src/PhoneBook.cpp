/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:40:18 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/15 17:46:31 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

void PhoneBook::addContact() {
	Contact contact;
	std::string input;

    contacts[currentIndex] = contact;
    currentIndex = (currentIndex) % 8;

	std::cout << "\033[2J\033[1;1H";
	do {
		std::cout << "Enter First Name:" << std::endl;
		std::getline(std::cin, input);
		contact.setFirstName(input);
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please don't leave the field empty!!!" << std::endl << std::endl << std::endl;
	} while (input.empty());

	std::cout << "\033[2J\033[1;1H";
	do {
		std::cout << "Enter Last Name:" << std::endl;
		std::getline(std::cin, input);
		contact.setLastName(input);
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please don't leave the field empty!!!" << std::endl << std::endl << std::endl;
	} while (input.empty());

	std::cout << "\033[2J\033[1;1H";
	do {
		std::cout << "Enter Nickname:" << std::endl;
		std::getline(std::cin, input);
		contact.setNickName(input);
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please don't leave the field empty!!!" << std::endl << std::endl << std::endl;
	} while (input.empty());

	std::cout << "\033[2J\033[1;1H";
	do {
		std::cout << "Enter Phone Number:" << std::endl;
		std::getline(std::cin, input);
		contact.setPhoneNumber(input);
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please don't leave the field empty!!!" << std::endl << std::endl<< std::endl;
	} while (input.empty());

	std::cout << "\033[2J\033[1;1H";
	do {
		std::cout << "Enter Deepest Darkest Secret:" << std::endl;
		std::getline(std::cin, input);
		contact.setDarkestSecret(input);
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please don't leave the field empty!!!" << std::endl << std::endl << std::endl;
	} while (input.empty());

	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
	std::cout << "\033[2J\033[1;1H";
}

std::string formatField(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::searchContacts() const {

	std::cout << "\033[2J\033[1;1H";

	int index;
	while (1) {

		std::cout << std::setw(10) << "Index" << "|"
				  << std::setw(10) << "First Name" << "|"
				  << std::setw(10) << "Last Name" << "|"
				  << std::setw(10) << "Nickname" << "|"
				  << std::setw(10) << "Phone Number" << "|"
				  << std::setw(10) << "Deepest Darkest Secret" << std::endl;
		std::cout << "-------------------------------------------------------------------------------" << std::endl;
		
		for (int i = 0; i < 8; i++) {
			const Contact& c = contacts[i];
		
			if (c.getFirstName().empty())
				continue;

			std::cout << std::setw(10) << i + 1 << "|"
					  << formatField(c.getFirstName()) << "|"
					  << formatField(c.getLastName()) << "|"
					  << formatField(c.getNickName()) << "|"
			  		  << formatField(c.getPhoneNumber()) << "|"
			  		  << formatField(c.getDarkestSecret()) << std::endl;
		}

		std::cout << "Please select an Index to display more information" << std::endl;
		std::cout << "Select 0 to return to the main menu" << std::endl;
		if (!(std::cin >> index), index == 0) {
			std::cout << "\033[2J\033[1;1H";
			return;
		}
		if (index + 1 < 0 || index + 1 > 8 || contacts[index - 1].getFirstName().empty()) {
			std::cout << "\033[2J\033[1;1H";
			std::cout << "Invalid index. Please enter a valid index!!! " << std::endl << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Select 0 to return to the main menu" << std::endl;
		}
		else {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
	}

	std::cout << "\033[2J\033[1;1H";
	const Contact& display = contacts[index - 1];
	std::cout << "First Name:" << display.getFirstName() << std::endl;
	std::cout << "Last Name:" << display.getLastName() << std::endl;
	std::cout << "Nickname:" << display.getNickName() << std::endl;
	std::cout << "Phone Nbr:" << display.getPhoneNumber() << std::endl;
	std::cout << "D. D. Scrt:" << display.getDarkestSecret() << std::endl;
	std::cout << "Double Press Enter to continue" << std::endl;
	std::cin.get();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\033[2J\033[1;1H";
}
