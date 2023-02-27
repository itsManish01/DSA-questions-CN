// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. Just print them in different lines.
// Input format :
// A numeric string S
// Output Format :
// All possible codes in different lines
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw

#include <string.h>
using namespace std;
int atoi(char a)
{
    int i=a-'0';
    return i;
}
char itoa(int i)
{
    char c='a'+i-1;
    return c;
}

void helper(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    
    helper(input.substr(1),output+itoa(atoi(input[0])));
    
    if(input.size()>=2){
        int n=atoi(input[0])*10+atoi(input[1]);
        if(n>=10 && n<27){
            helper(input.substr(2),output+itoa(atoi(input[0])*10+atoi(input[1])));
        }
    }
    
}



void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    helper(input,output);
}

