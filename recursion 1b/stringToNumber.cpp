
// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")
// Output format :
// Corresponding integer N (int, Eg. 1234)
// Constraints :
// 0 < |S| <= 9
// where |S| represents length of string S.
// Sample Input 1 :
// 00001231
// Sample Output 1 :
// 1231
// Sample Input 2 :
// 12567
// Sample Output 2 :
// 12567

int len(char input[])
{
    int l=0;
    for (int i=0;input[i]!='\0';i++){
        l++;
    }
    return l;
}

int pow(int a,int b){
    if(b==0){
        return 1;}
    else {int ans=1;
    for(int k=1;k<=b;k++){
        ans=ans*a;
    }return ans;}
}

int stringToNumber(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return 0;
    }
    
    
    int size=len(input);
    //-48 becasue '1' =49 ,,,, '2' =50,,,,, so on...
    return ((input[0]-48 )*pow(10,size-1) + stringToNumber(input+1));
    
}


