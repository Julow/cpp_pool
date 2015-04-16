/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 14:57:00 by jaguillo          #+#    #+#             */
/*   Updated: 2015/04/16 17:00:44 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include "IInstruction.hpp"
# include <string>
# include <deque>
# include <exception>

# define BUFF_SIZE		30000

class	Mindopen
{
public:
	struct	s_inst
	{
		char	c;
		void	(Mindopen::*f)(void);
	};

	Mindopen(std::string const &file) throw(std::invalid_argument);
	virtual ~Mindopen(void);

	char						buff[BUFF_SIZE];
	int							buff_ptr;
	std::deque<IInstruction*>::iterator	it;

	std::deque<IInstruction*>	&getQueue(void);

protected:
	std::deque<IInstruction*>	_queue;

	void						_queueInst(char c);

	void						_queueInstRight(void);
	void						_queueInstLeft(void);
	void						_queueInstInc(void);
	void						_queueInstDec(void);
	void						_queueInstWrite(void);
	void						_queueInstRead(void);
	void						_queueInstLoop(void);
	void						_queueInstEndLoop(void);

	static const s_inst			_insts[];

private:
	Mindopen(void);
	Mindopen(Mindopen const &src);
	Mindopen					&operator=(Mindopen const &rhs);
};

#endif
