/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scv.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 20:21:27 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 22:00:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCV_CLASS_HPP
# define SCV_CLASS_HPP

# include <iostream>
# include <string>
# include "Ressource.class.hpp"
# include "IBuilder.interface.hpp"
# include "Unit.class.hpp"
# include "Building.class.hpp"
# include "CommandCenter.class.hpp"
# include "Bunker.class.hpp"
# include "Barracks.class.hpp"
# include "SupplyDepot.class.hpp"

class	Scv : public Unit, public IBuilder
{
	public:
		Scv(void);
		Scv(int x, int y);
		Scv(Scv const &src);
		~Scv(void);

		void		move(int x, int y);

		void		gatherRessources(Ressource &ressource);

		void		returnRessources(CommandCenter &cc);

		Building	*createBuilding(building_e building, int x, int y);

		Scv			&operator=(Scv const &rhs);

	protected:
		int			_res;
		Ressource::type_e	_resType;

		Building	*_buildCommandCenter(int x, int y);
		Building	*_buildBarracks(int x, int y);
		Building	*_buildSupplyDepot(int x, int y);
		Building	*_buildBunker(int x, int y);

	private:
		typedef Building	*(Scv::*t_build)(int, int);

		static Scv::t_build		builds[4];
};

#endif
