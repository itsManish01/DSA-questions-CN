// Given two strings s and t of lengths m and n respectively, find the edit distance between the strings.
// Edit Distance
// Edit Distance of two strings is minimum number of operations required to make one string equal to other. In order to do so you can perform any of the following three operations only :
// 1. Delete a character
// 2. Replace a character with another one
// 3. Insert a character
// Note
// Strings don't contain spaces
// You need to find the edit distance from input string1 to input string2.
// Input Format :
// The first line of input contains a string, that denotes the value of s. The following line contains a string, that denotes the value of t.
// Output Format :
// The first and only line of output contains the edit distance value between the given strings.
// Constraints :
// 1<= m,n <= 10
// Time Limit: 1 second
// Sample Input 1 :
// abc
// dc
// Sample Output 1 :
// 2
#include<bits/stdc++.h>
int help(string s1, string s2,int ** mem ,int i,int j) {
	// Write your code here
	//base case
	if(s1.size()==i || s2.size()==j ){
		return max( s1.size()-i,s2.size()-j );
	}
    if(mem[i][j]!=-1) return mem[i][j];
	if(s1[i]==s2[j]){
		return mem[i][j]=help(s1,s2,mem,1+i,j+1);
	}else{
		//Insert part
		int a=1+help(s1,s2,mem,i+1,j);
		//delete part
		int b=1+help(s1,s2,mem,i,1+j);
		//Remove & replace part
		int c=1+help(s1,s2,mem,i+1,j+1);
		return mem[i][j]=min(a,min(b,c));
	}
}

int editDistance(string s1, string s2) {
	int** mem=new int*[s1.size()];
    for (int i = 0; i < s1.size(); i++)
    {
        mem[i]=new int[s2.size()];
        for (int j = 0; j < s2.size(); j++)
        {
            mem[i][j]=-1;
        }
        
    }

    return help(s1,s2,mem,0,0);
}