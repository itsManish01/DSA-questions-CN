// A thief wants to loot houses. He knows the amount of money in each house. He cannot loot two consecutive houses. Find the maximum amount of money he can loot.
// Input format :
// The first line of input contains an integer value of 'n'. It is the total number of houses.

// The second line of input contains 'n' integer values separated by a single space denoting the amount of money each house has.
// Output format :
// Print the the maximum money that can be looted.
// Constraints :
// 0 <= n <= 10 ^ 4

// Time Limit: 1 sec
// Sample Input 1 :
// 6
// 5 5 10 100 10 5
// Sample Output 1 :
// 110
// Sample Input 2 :
// 6
// 10 2 30 20 3 50
// Sample Output 2 :
// 90
// Explanation of Sample Output 2 :
// Looting first, third, and the last houses([10 + 30 + 50]) will result in the maximum loot, and all the other possible combinations would result in less than 90.


#include<bits/stdc++.h>

int help(int i,int *arr, int n,vector<int>& mem){
    if(i>=n)return 0;
    else{
        //include
		if(mem[i]!=-1) return mem[i];
        int opt1= arr[i]+help(i+2,arr,n,mem);
        //igonre
        int opt2= help(i+1,arr,n,mem);
        
		mem[i]=max(opt1,opt2);
		return mem[i];
    }
}

int maxMoneyLooted(int *arr, int n)
{
	vector<int> mem(n);
	fill(mem.begin(), mem.end(), -1);

	return help(0,arr,n,mem);
}


//DP
int maxMoneyLooted(int *arr, int n)
{
	if(n==0) return 0;
	if(n==1) return arr[0];
	vector<int> dp(n);
	dp[0]=arr[0];
	dp[1]=arr[1];

	for(int i=2;i<n;i++){
		dp[i]=max(dp[i-1], dp[i-2]+arr[i]);
	}
	return dp[n-1];
}