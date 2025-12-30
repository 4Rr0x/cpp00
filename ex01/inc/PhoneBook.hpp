/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:12:05 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/13 16:39:53 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <limits>
# include <iomanip>

class PhoneBook {
	
	private:
		Contact contacts[8];
		int currentIndex;

	public:
		PhoneBook();

		void addContact();
		void searchContacts() const;
};

#endif
