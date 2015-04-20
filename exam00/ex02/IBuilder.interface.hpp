/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IBuilder.interface.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 20:14:44 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 21:05:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IBUILDER_INTERFACE_HPP
# define IBUILDER_INTERFACE_HPP

# include "Building.class.hpp"

class	IBuilder
{
	public:
		virtual ~IBuilder(void){}

		enum	building_e
		{
			COMMAND_CENTER = 1,
			BARRACKS,
			SUPPLY_DEPOT,
			BUNKER
		};

		virtual Building		*createBuilding(building_e building, int x, int y) = 0;

	protected:
		virtual Building		*_buildCommandCenter(int x, int y) = 0;
		virtual Building		*_buildBarracks(int x, int y) = 0;
		virtual Building		*_buildSupplyDepot(int x, int y) = 0;
		virtual Building		*_buildBunker(int x, int y) = 0;
};

#endif
