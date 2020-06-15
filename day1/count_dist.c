//
write a c program to count the distinct elements in an array
//



#include <stdio.h> 
  
  // Driver program to test above function 
int main() 
{ 
    int n;
    printf("enter the n number: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int res = 1; 
  
    // Pick all elements one by one 
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
            res++; 
    } 
    printf("%d",res);  
} 