/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:50:54 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/13 16:21:07 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact {

	private:
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;

	public:
		Contact();
		void setFirstName(const std::string& fName);
		void setLastName(const std::string& lName);
		void setPhoneNumber(const std::string& pNumber);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getPhoneNumber() const;
};

#endif
