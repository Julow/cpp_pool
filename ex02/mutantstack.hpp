/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 12:48:17 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 14:42:09 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template< typename T >
class	MutantStack : public std::stack<T>
{
public:
	class	iterator : public std::iterator<std::random_access_iterator_tag, T>
	{
	public:
		iterator(void)
			: _ptr(NULL)
		{
		}

		iterator(T *ptr)
			: _ptr(ptr)
		{
		}

		iterator(iterator const &src)
		{
			*this = src;
		}

		virtual ~iterator(void)
		{
		}

		iterator		&operator++(void)
		{
			++_ptr;
			return (*this);
		}

		iterator		operator++(int)
		{
			iterator		it(*this);

			++_ptr;
			return (it);
		}

		iterator		&operator=(iterator const &rhs)
		{
			_ptr = rhs._ptr;
			return (*this);
		}

		bool			operator==(iterator const &rhs) const
		{
			return (_ptr == rhs._ptr);
		}

		bool			operator!=(iterator const &rhs) const
		{
			return (_ptr != rhs._ptr);
		}

		T				&operator*(void)
		{
			return (*_ptr);
		}

	protected:
		T				*_ptr;

	private:
	};

	MutantStack(void)
		: std::stack<T>()
	{
	}

	virtual ~MutantStack(void)
	{
	}

	void				push_back(T const &v)
	{
		this->push(v);
	}

	iterator			begin(void)
	{
		if (this->size() <= 0)
			return (iterator());
		return (iterator((&(this->top())) - this->size() + 1));
	}

	iterator			end(void)
	{
		if (this->size() <= 0)
			return (iterator());
		return (iterator((&(this->top())) + 1));
	}

protected:

private:
	MutantStack(MutantStack const &src);
	MutantStack			&operator=(MutantStack const &rhs);
};

#endif
