// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5 
// Sample Output:
// 3 

// input - input array
// size - length of input array
// element - value to be searched
int helper(int input[],int s,int e,int key){
    
    int mid=(e+s)/2;
    if( s>=e ){return -1;}
    if(input[mid]==key){
        return mid;
    }      
    else if( input[mid]>key){
        return helper(input,s,mid-1,key);
    }else if(input[mid]<key){
        return helper(input,mid+1,e,key);
    }
}

int binarySearch(int input[],int n,int key){
    int s=0,e=n-1;
    return helper(input,s,e,key);
}

