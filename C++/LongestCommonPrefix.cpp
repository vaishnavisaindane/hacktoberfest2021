/*
Function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, returns an empty string "".

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string ans = "";
    std::string min_string = *min_element(strs.begin(), strs.end());

    if (strs.size() == 0) {
        return ans;
    }

    for (int i = 0; i < min_string.size(); i++) {
        for (int j = 0; j < strs.size(); j++) {
            if (min_string[i] != strs[j][i]) {
                return ans;
            }
        }
        ans.push_back(min_string[i]);
    }
    return ans;
}

//Driver code
int main()
{
    std::vector<std::string> stringList = { "Flowers", "Flavor", "Florida", "Flights", "Flying" };
	std::cout << longestCommonPrefix(stringList);
	return 0;
}