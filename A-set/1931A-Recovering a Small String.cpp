#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	int test; std::cin >> test; 
  
	while (test--)
	{
	int n, chars = 26;
        std::cin >> n;
        std::string mins = "zzz", curr;
        for (int i = 0; i < chars; i++) {
            for (int j = 0; j < chars; j++) {
                for (int k = 0; k < chars; k++) {
                    if (i + j + k + 3 == n) {
                        curr += char(i + 'a');
                        curr += char(j + 'a');
                        curr += char(k + 'a');
                        mins = min(curr, mins);
                    }
                }
            }
        }

        std::cout << mins << "\n";
	}


}

