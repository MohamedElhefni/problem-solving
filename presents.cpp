#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	pair<int, int> friends[100];
	
	cin >> n;
	for (int i = 0 ; i < n ; i++)		
	{
		int pi, index = i + 1 ;
		cin >> pi;
		friends[i] = make_pair(pi, index);
		
	}
	

	sort(friends, friends + n);

	for (int i =0 ; i < n ; i++)
		cout << friends[i].second << " ";		

	return 0 ;
}
