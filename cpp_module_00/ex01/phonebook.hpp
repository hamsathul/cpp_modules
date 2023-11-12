/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:19:40 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/11/08 20:19:40 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

	public:

	std::string		First_Name;
	std::string		Last_Name;
	std::string		Nickname;
	std::string		Phone_Number;
	std::string		Darkest_Secret;
};

class PhoneBook{

	public:

		Contact Contacts[8];
		int		counter;
};

#endif