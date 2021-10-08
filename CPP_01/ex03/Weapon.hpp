#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{

	public:
		Weapon(std::string type);
		~Weapon();
		void	setType(std::string type);
		const std::string &getType() const;

	private:
		std::string _type;

};

#endif 