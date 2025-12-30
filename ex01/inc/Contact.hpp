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
		std::string nickName;
		std::string darkestSecret;

	public:
		Contact();
		void setFirstName(const std::string& fName);
		void setLastName(const std::string& lName);
		void setPhoneNumber(const std::string& pNumber);
		void setNickName(const std::string& nName);
		void setDarkestSecret(const std::string& dSecret);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getPhoneNumber() const;
		std::string getNickName() const;
		std::string getDarkestSecret() const;
};

#endif
