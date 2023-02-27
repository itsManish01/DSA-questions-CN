// Check whether a given String S is a palindrome using recursion. Return true or false.
// Input Format :
// String S
// Output Format :
// 'true' or 'false'
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// racecar
// Sample Output 1:
// true
// Sample Input 2 :
// ninja
// Sample Output 2:
// false


#include<bits/stdc++.h>
using namespace std;
bool helper(char input[],int size,int si,int ei){
    if(size<=0){
        return true;
    }
    if(input[si]==input[ei]){
        return helper(input,size-2,si+1,ei-1);
    }else{
        return false;
    }
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int size= 0;
    for(int i=0;input[i]!='\0';i++)
        size++;
    return helper(input,size,0,size-1);
}

