#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>

class OutOfRange : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("There is no occurrence...");
		}
};

template <typename T>
int *easyfind(T &vec, int i)
{
	typename T::iterator iterator;

	iterator = std::find(vec.begin(), vec.end(), i);
	if (iterator == vec.end())
		throw (OutOfRange());
	return (&(*iterator));
}

#endif
