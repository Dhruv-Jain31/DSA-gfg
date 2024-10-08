/*Min Number of Flips
Difficulty: EasyAccuracy: 48.58%Submissions: 50K+Points: 2
Given a binary string, that is it contains only 0s and 1s. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped.

Example 1:

Input:
S = "001"
Output: 1
Explanation: 
We can flip the 0th bit to 1 to have
101.


Example 2:

Input:
S = "0001010111" 
Output: 2
Explanation: We can flip the 1st and 8th bit 
bit to have "0101010101"
101.

Your Task:
You don't need to read input or print anything. Your task is to complete the function minFlips() which takes the string S as input and returns the minimum number of flips required.*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int count_1 = 0, count_2 = 0, minimum_flips = 0;
    for(int i = 0; i < S.size(); i++){
        if(i%2 == 1 && S[i] == '0'){
            count_1++; // 1 must be at even positions if there is a 0 then flip
        }
        if(i%2 == 0 && S[i] == '1'){
            count_1++;
        }
        if(i%2 == 1 && S[i] == '1'){
            count_2++;
        }
        if(i%2 == 0 && S[i] == '0'){
            count_2++;
        }
    }
    minimum_flips = min(count_1, count_2);
    return minimum_flips;
}