/*Split the binary string into substrings with equal number of 0s and 1s
Difficulty: EasyAccuracy: 50.02%Submissions: 25K+Points: 2
Given binary string str of length N. The task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e. they have an equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then return -1.

Example 1:

Input:
S = "0100110101"
Output: 4
Explanation: 
The required substrings are 01, 0011, 01 and 01*/

//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int count_0 = 0, count_1 = 0;
        int cnt = 0;
        
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '0'){
                count_0++;
            }
            else{
                count_1++;
            }
            if(count_0 == count_1){
                cnt++;
            }
        }
        if(count_1 != count_0){
            return -1;
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
