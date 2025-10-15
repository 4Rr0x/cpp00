/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro- <jopedro-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:18:46 by jopedro-          #+#    #+#             */
/*   Updated: 2025/10/13 16:40:08 by jopedro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc/PhoneBook.hpp"

int main() {
	PhoneBook ph;

	while (1)
	{
		std::string input;

		std::cout << "Available commands:" << std::endl;
		std::cout << "ADD -> Add new contact" << std::endl;
		std::cout << "SEARCH -> Show contact list" << std::endl;
		std::cout << "EXIT -> Exit the program" << std::endl;
		if (!std::getline(std::cin, input)){
                std::cout << std::endl;
                break ;
		}
		if (input == "ADD")
			ph.addContact();
		else if (input == "SEARCH")
		   ph.searchContacts();
		else if (input == "EXIT")
		   exit(0);
		else {
			std::cout << "\033[2J\033[1;1H";
			std::cerr << "Please input a valid option" << std::endl << std::endl;
		}
	}
}
