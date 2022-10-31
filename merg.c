#include<stdio.h> 
 void main() { 
   int arr1 [10], arr2 [10], arr3 [20]; 
   int i, n1, n2, m, k=0;  
   printf("\n Enter the number of elements in array 1: "); 
   scanf("%d", &n1); 
   printf("\n\n Enter the Elements of the first array"); 
   for(i=0;i<n1;i++)  { 
     scanf ("%d",&arr1[i]); 
   } 
   printf("\n Enter the number of elements in array 2: "); 
   scanf ("%d", &n2 ); 
   printf("\n\n Enter the Elements of the second array");  
   for(i=0;i<n2;i++) { 
      scanf ("%d", &arr2[i]); 
      m = n1+n2; 
   } 
   for(i=0;i<n1;i++) { 
     arr3[k]=arr1[i]; 
     k++; 
   } 
   for(i=0;i<n2;i++) { 
      arr3[k]=arr2[i]; 
      k++; 
   } 
   printf ("\n\n The merged array is"); 
   for(i=0;i<m;i++) { 
     printf("\t\n %d", arr3[i]); 
   }  
 }
