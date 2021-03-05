#include "../include/includes.hpp" 

int main()
{
	std::vector<int> hi{1,2,3,4,5,6,7,8,9,0,8,5};
	list<int> yo(hi);
	
	list<int> hoi(yo);

	list<int> mimi(3);

	yo.insert(6, 3);
	yo.insert(7, 3);
	yo.insert(8, 3);

	std::cout<<yo.front();
	std::cout<<yo.back();

	for(int f=0; f<15; f++)
		std::cout<< yo[f]<<" ";
	std::cout<<"\n";
	for(int f=0; f<12; f++)
		std::cout<< hoi[f]<<" ";
}