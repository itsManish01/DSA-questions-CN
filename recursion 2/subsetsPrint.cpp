// Given an integer array (of length n), find and print all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print the subsets in different lines.
// Input format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)
// Constraints :
// 1 <= n <= 15
// Sample Input:
// 3
// 15 20 12
// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12 

void printSubsetsHelper(int input[],int si,int size,int output[],int Osize){
    if(si==size){
        for(int i=0;i<Osize;i++){
            cout<<output[i]<<" ";
        }cout<<'\n';
        return;
    }
	printSubsetsHelper(input,si+1,size,output,Osize);
    int smallOutput[1000];
    int i=0;
    for(;i<Osize;i++){
        smallOutput[i]=output[i];
    }
    smallOutput[i]=input[si];
    printSubsetsHelper(input,si+1,size,smallOutput,Osize+1);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[1000];
    printSubsetsHelper(input,0,size,output,0);
}
