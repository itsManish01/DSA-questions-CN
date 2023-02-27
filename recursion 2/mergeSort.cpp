// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5 

void mergesortstep(int input[],int si,int ei){
    int mid=(si+ei)/2;
    int size=ei-si+1;
    int * array=new int[size];
    int i=si;
    int j=mid+1;
    int k=0;
    while( i<=mid && j<=ei){
        if( input[i] < input[j]){
            array[k]=input[i];
            k++;
            i++;
        }else{
            array[k]=input[j];
            j++;
            k++;
        }
    }
    while (i<=mid){
        array[k]=input[i];
        i++;
        k++;
    }
    while (j<=ei){
        array[k]=input[j];
        j++;
        k++;
    }
    int m=0;
    for(int i=si;i<=ei;i++){
        input[i]=array[m];
        m++;
    }
    delete [] array;
}


void merge_sort(int input[],int si,int ei){
    if( si>=ei){ 
    return ;
    }
    
    int mid=(si+ei)/2;
    merge_sort(input,si,mid);
    merge_sort(input,mid+1,ei);
    mergesortstep(input,si,ei);
}


void mergeSort(int input[], int size){
    int si=0;
    int ei=size-1;
    merge_sort(input,si,ei);
}
