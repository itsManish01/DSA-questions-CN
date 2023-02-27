
// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Input format :
// String S
// Output format :
// Modified String
// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string S. 
// Sample Input 1 :
// xaxb
// Sample Output 1:
// ab
// Sample Input 2 :
// abc
// Sample Output 2:
// abc
// Sample Input 3 :
// xx
// Sample Output 3:

// Change in the given string itself. So no need to return or print anything
int length(char input[]){
    int l=0;
    for(int i=0;input[i]!='\0';i++){
        l++;
    }return l;
}

void removeX(char input[]) {
    // Write your code here
    if(input[0]=='\0')
        return;
    if(input[0]=='x')
    {removeX(input + 1) ;  
     int size=length(input);
        for(int i=1;i<=size;i++){
            input[i-1]=input[i];
        }
    
    }
    else{ 
        removeX(input+1);
    }
        

}
