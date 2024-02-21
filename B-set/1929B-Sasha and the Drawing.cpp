#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int test; std::cin >> test; 
	while (test--)
	{
		int n, k; std::cin >> n >> k; 
		int ans = 0;
		int diagonal = 4 * n - 2;
    
		if(k%2==0)
			ans = (k / 2);
		else
			ans = (k / 2) +1 ;

		if (k == diagonal)
		{
			ans++;
		}
        std::cout << ans << "\n";
	}

}

