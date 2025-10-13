/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:27:53 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/13 15:58:24 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(const std::string& fname){
	firstName = fname;
}

void Contact::setLastName(const std::string& lname){
	lastName = lname;
}

void Contact::setPhoneNumber(const std::string& pnumber){
	phoneNumber = pnumber;
}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}
