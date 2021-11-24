#include <iostream>
#include <vector>
#include <map>

int main()
{
	std::vector<int> v = {0, 1, 2, 3, 4, 5};
	for (auto i : v)
		std::cout << i << ' ';
	
	std::cout << '\n';
	
	for (int n : {0, 1, 2, 3, 4, 5})
		std::cout << n << ' ';
	
	std::cout << '\n';

	int a[] = {0, 1, 2, 3, 4, 5};	
	for (int n : a)
		std::cout << n << ' ';
	
	std::cout << '\n';
	
	for (int n : a)
		std::cout << "good morning" << ' ';
	
	std::cout << '\n';
	
	std::string str = "einfochips familay";
	for (char c : str)
		std::cout << c << ' ';
		
	std::cout << '\n';

	std::map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
	for (auto i : MAP)
		std::cout << '{' << i.first << ", "
				<< i.second << "}\n";
}
