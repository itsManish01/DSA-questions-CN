// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <iostream>
#include <string>
using namespace std;
void helper(int n,string output){
    if(n==0){
        cout<<output<<endl;
        return;
    }
    
    if(n%10==2){
        int m=n/10;
        
        helper(m,"a"+output);
        helper(m,"b"+output);
        helper(m,"c"+output);
    }else if(n%10==3){
        int m=n/10;
        
        helper(m,"d"+output);
        helper(m,"e"+output);
        helper(m,"f"+output);
    }else if(n%10==4){
        int m=n/10;
        
        helper(m,"g"+output);
        helper(m,"h"+output);
        helper(m,"i"+output);
    }else if(n%10==5){
        int m=n/10;
       
        helper(m,"j"+output);
        helper(m,"k"+output);
        helper(m,"l"+output);
    }else if(n%10==6){
        int m=n/10;
        
        helper(m,"m"+output);
        helper(m,"n"+output);
        helper(m,"o"+output);
    }else if(n%10==7){
        int m=n/10;
        
        helper(m,"p"+output);
        helper(m,"q"+output);
        helper(m,"r"+output);
        helper(m,"s"+output);
    }else if(n%10==8){
        int m=n/10;
        
        helper(m,"t"+output);
        helper(m,"u"+output);
        helper(m,"v"+output);    
    }else if(n%10==9){
        int m=n/10;
        
        helper(m,"w"+output);
        helper(m,"x"+output);
        helper(m,"y"+output);
        helper(m,"z"+output);
    }
    
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    helper(num,output);
}
