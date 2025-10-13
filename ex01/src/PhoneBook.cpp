/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:40:18 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/13 16:57:09 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0) {}

void PhoneBook::addContact(const Contact& contact) {
	std::string input;

    contacts[currentIndex] = contact;
    currentIndex = (currentIndex + 1) % 8;

	std::cout << "Enter First Name:" << std::endl;
	if (!std::getline(std::cin, input)) return;
	contact.setFirstName(input);

	std::cout << "Enter Last Name:" << std::endl;
	if (!std::getline(std::cin, input)) return;
	contact.setLastName(input);

	std::cout << "Enter Phone Number:" << std::endl;
	if (!std::getline(std::cin, input)) return;
	contact.setPhoneNumber(input);

	contacts[currentIndex] = contact;
	currentIndex = (currentIndex + 1) % 8;
}
