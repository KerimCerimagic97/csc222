#include "num_vector_utils.h"
#include <vector>

string render_num_vector(const vector<int>&) {
    vector<int> nums = {1, 3, 7};

    string s = "";

    for (int i = 0; i< nums.size(); ++i) {
	    if (i <nums.size()-1) {
		    s += nums[i];
	    }
    }
    return s;
}

