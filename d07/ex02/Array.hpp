/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 13:53:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/15 14:20:21 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <ostream>
# include <exception>

template< typename T >
class	Array
{
public:
	Array(void)
	{
		_init(0);
	}

	Array(unsigned int len)
	{
		_init(len);
	}

	Array(Array<T> const &src)
		: _data(NULL), _size(0)
	{
		*this = src;
	}

	virtual ~Array(void)
	{
		delete [] _data;
	}

	Array			&operator=(Array<T> const &rhs)
	{
		unsigned int	i;

		_destroy();
		_size = rhs._size;
		_data = new T[_size];
		for (i = 0; i < _size; i++)
			_data[i] = rhs._data[i];
		return (*this);
	}

	unsigned int	size(void) const
	{
		return (_size);
	}

	T				&operator[](unsigned int i) const throw(std::out_of_range)
	{
		if (i >= _size)
			throw std::out_of_range("Out of range");
		return (_data[i]);
	}

protected:
	T				*_data;
	unsigned int	_size;

	void			_init(unsigned int len)
	{
		_data = (len == 0) ? NULL : new T[len];
		_size = len;
	}

	void			_destroy(void)
	{
		if (_data != NULL)
			delete [] _data;
	}

private:
};

template< typename T >
std::ostream		&operator<<(std::ostream &o, Array<T> &f)
{
	unsigned int		i;

	o << '[';
	for (i = 0; i < f.size(); i++)
	{
		if (i > 0)
			o << ", ";
		o << f[i];
	}
	o << ']';
	return (o);
}

#endif
