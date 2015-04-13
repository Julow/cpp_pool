/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scv.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/10 20:24:00 by exam              #+#    #+#             */
/*   Updated: 2015/04/10 21:57:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scv.class.hpp"

Scv::Scv(void)
	: Unit("SCV T-280", 0, 0, 5, 60, 60), _res(0), _resType(Ressource::GAS)
{
	std::cout << "Unit #" << _index << ": SCV good to go, sir." << std::endl;
}

Scv::Scv(int x, int y)
	: Unit("SCV T-280", x, y, 5, 60, 60), _res(0), _resType(Ressource::GAS)
{
	std::cout << "Unit #" << _index << ": SCV good to go, sir." << std::endl;
}

Scv::Scv(Scv const &src)
	: Unit(src), _res(0), _resType(Ressource::GAS)
{
	std::cout << "Unit #" << _index << ": SCV good to go, sir." << std::endl;
}

Scv::~Scv(void)
{
	//std::cout << "Unit #" << _index << ": * noise of an exploding SCV *." << std::endl;
}

void		Scv::move(int x, int y)
{
	Unit::move(x, y);
	std::cout << "Unit #" << _index << ": Affirmative." << std::endl;
}

void		Scv::gatherRessources(Ressource &ressource)
{
	Unit::move(ressource.getX(), ressource.getY());
	if (!ressource.isDepleted() && _res == 0)
	{
		_res = ressource.gather();
		_resType = ressource.type;
		std::cout << "Unit #" << _index << " (" << _type << ") gathered " << _res << ' ';
		if (ressource.type == Ressource::GAS)
			std::cout << "gas";
		else
			std::cout << "minerals";
		std::cout << '.' << std::endl;
	}
}

void		Scv::returnRessources(CommandCenter &cc)
{
	Unit::move(cc.getX(), cc.getY());
	cc.acceptRessources(_resType, _res);
	std::cout << "Unit #" << _index << " (" << _type << ") returned " << _res << ' ';
	if (_resType == Ressource::GAS)
		std::cout << "gas" << '.' << std::endl;
	else
		std::cout << "minerals." << std::endl;
	_res = 0;
}

Building	*Scv::createBuilding(building_e building, int x, int y)
{
	if (building < 1 || building > 4)
	{
		std::cout << "Unit #" << _index << ": No such building, sir." << std::endl;
		return (NULL);
	}
	return ((this->*builds[building - 1])(x, y));
}

Building	*Scv::_buildCommandCenter(int x, int y)
{
	std::cout << "Unit #" << _index << ": Command center finished, sir." << std::endl;
	return (new CommandCenter(x, y));
}

Building	*Scv::_buildBarracks(int x, int y)
{
	std::cout << "Unit #" << _index << ": Barrack finished, sir." << std::endl;
	return (new Barracks(x, y));
}

Building	*Scv::_buildSupplyDepot(int x, int y)
{
	std::cout << "Unit #" << _index << ": Supply depot finished, sir." << std::endl;
	return (new SupplyDepot(x, y));
}

Building	*Scv::_buildBunker(int x, int y)
{
	std::cout << "Unit #" << _index << ": Bunker finished, sir." << std::endl;
	return (new Bunker(x, y));
}

Scv::t_build	Scv::builds[4] = {&Scv::_buildCommandCenter, &Scv::_buildBarracks, &Scv::_buildSupplyDepot, &Scv::_buildBunker};

Scv			&Scv::operator=(Scv const &rhs)
{
	Unit::operator=(rhs);
	_res = rhs._res;
	_resType = rhs._resType;
	return (*this);
}
