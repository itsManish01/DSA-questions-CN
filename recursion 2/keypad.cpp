// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
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

#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    
    if(num==0){
        output[0]="";
        return 1;
    }
    int smallcount=keypad(num/10,output);
    int endDigit=num%10;
    if(endDigit==2){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"b";
            output[i+ 2*smallcount]=output[i]+"c";
            output[i]=output[i]+"a";
        }
    return 3*smallcount;
        
    }
    else if(endDigit==3){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"e";
            output[i+ 2*smallcount]=output[i]+"f";
            output[i]=output[i]+"d";
        }
    return 3*smallcount;
    }
    
    else if(endDigit==4){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"h";
            output[i+ 2*smallcount]=output[i]+"i";
            output[i]=output[i]+"g";
        }
    return 3*smallcount;
    }
    else if(endDigit==5){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"k";
            output[i+ 2*smallcount]=output[i]+"l";
            output[i]=output[i]+"j";
        }
    return 3*smallcount;
    }else if(endDigit==6){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"n";
            output[i+ 2*smallcount]=output[i]+"o";
            output[i]=output[i]+"m";
        }
    return 3*smallcount;
    }else if(endDigit==7){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"q";
            output[i+ 2*smallcount]=output[i]+"r";
            output[i+ 3*smallcount]=output[i]+"s";
            output[i]=output[i]+"p";
        }
    return 4*smallcount;
    }else if(endDigit==8){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"u";
            output[i+ 2*smallcount]=output[i]+"v";
            output[i]=output[i]+"t";
        }
    return 3*smallcount;
    }else if(endDigit==9){
        for(int i=0;i<smallcount;i++){
            output[i+smallcount]=output[i]+"x";
            output[i+ 2*smallcount]=output[i]+"y";
            output[i+ 3*smallcount]=output[i]+"z";
            output[i]=output[i]+"w";
        }
    return 4*smallcount;
    }
    
}

