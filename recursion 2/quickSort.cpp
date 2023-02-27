// Sort an array A using Quick Sort.
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
// 1 5 2 7 3
// Sample Output 2 :
// 1 2 3 5 7 


int partition_Subsort(int a[],int si,int ei)
{
    int pivot=a[si];
    int countsmaller=0,i,j;
    for(i=si+1;i<=ei;i++)
    {
        if(a[i]<=pivot)
            countsmaller++;
    }
    int pivotindex=si+countsmaller;
    a[si]=a[pivotindex];
    a[pivotindex]=pivot;
    i=si;
    j=ei;
    while(i<pivotindex&&j>pivotindex)
    {
        if(a[i]<=pivot)
            i++;
        else if(a[j]>pivot)
            j--;
        else
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    return pivotindex;
}


void quick_Sort(int input[], int start, int end){
    if(start>=end){
        return ;
    }
    
    int pi=partition_Subsort(input,start,end);
    quick_Sort(input,start,pi-1);
    quick_Sort(input,pi+1,end);
}
	

void quickSort(int input[], int size) {
  
quick_Sort(input, 0, size - 1);
}

