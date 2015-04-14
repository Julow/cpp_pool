/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 13:44:43 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/14 18:12:29 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

struct Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

char			randChar(void)
{
	char			c;

	c = rand() % (10 + 26 + 26);
	if (c < 10)
		c += '0';
	else if (c >= 10 && c < (10 + 26))
		c += 'A' - 10;
	else if (c >= (10 + 26))
		c += 'a' - 10 - 26;
	return (c);
}

void			*serialize(void)
{
	char			*data;
	int				len;
	int				i;

	len = 8 + sizeof(int) + 8;
	data = new char[len];
	for (i = 0; i < 8; i++)
	{
		data[i] = randChar();
		data[i + 8 + sizeof(int)] = randChar();
	}
	*(reinterpret_cast<int*>(data + 8)) = rand();
	return (reinterpret_cast<void*>(data));
}

Data			*deserialize(void *raw)
{
	char			*raw_bytes;
	Data			*data;

	raw_bytes = reinterpret_cast<char*>(raw);
	data = new Data();
	data->s1 = std::string(reinterpret_cast<char*>(raw_bytes), 8);
	data->n = *(reinterpret_cast<int*>(raw_bytes + 8));
	data->s2 = std::string(reinterpret_cast<char*>(raw_bytes + 8 + sizeof(int)), 8);
	return (data);
}

int				main(void)
{
	void			*serialized;
	Data			*data;

	srand(time(NULL));
	serialized = serialize();
	std::cout << std::string(reinterpret_cast<char*>(serialized), static_cast<int>(8 + sizeof(int) + 8)) << std::endl;
	data = deserialize(serialized);
	std::cout << data->s1 << std::endl << data->n << std::endl << data->s2 << std::endl;
	return (0);
}
