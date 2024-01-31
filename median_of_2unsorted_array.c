/*
Description : Program to find the median of two unsorted arrays
Sample input : Enter the 'n' value for Array A: 5
               Enter the 'n' value for Array B: 4
               Enter the elements one by one for Array A: 3 2 8 5 4
               Enter the elements one by one for Array B: 12 13 7 5
Sample output : Median of array1 : 4
                Median of array2 : 9.5                                      
                Median of both arrays : 6.75
*/
#include<stdio.h>
int main()
{
	int m,n,i,j,median,medianA,medianB;                                         //declaring the variables
	float medianevenA, medianevenB;                                             //declaring median variables for even number of array elements A and B
	
	printf("Enter the 'n' value for Array A: ");                                //printing the prompt message to user
	scanf("%d", &m);                                                            //reading the input from user
	
	printf("Enter the 'n' value for Array B: ");                                //printing the prompt message to user
	scanf("%d", &n);                                                            //reading the input from user

	int arrA[m], arrB[n];                                                       //declaring the two arrays
	
    printf("Enter the elements one by one for Array A: ");                      //printing the prompt message to user
	for ( i = 0; i < m; i++)                                                    //iterating from index 0 to last index of arrA to read arrA
	{
		scanf("%d", &arrA[i]);                                                  //reading the elements of array 
	}	
    printf("Enter the elements one by one for Array B: ");                      //printing the prompt message to user
	for ( i = 0; i < n; i++ )                                                   //iterating from index 0 to last index of arrB to read arrB
	{
		scanf("%d", &arrB[i]);                                                  //reading the elements of array 
	}
    int temp;                                                                   //declaring the temp variable to sort array using bubble sort method
    
	for ( i = 0; i < m; i++ )                                                   //sorting the arrA using bubble sort
	{
		for ( j = 0; j < (m-i-1); j++ )
		{
			if ( arrA[j] > arrA[j+1] )
			{
				temp = arrA[j];
				arrA[j] = arrA[j+1];
				arrA[j+1] = temp;
			}
		}
	}
	for ( i = 0; i < n; i++ )                                                   //sorting the arrB using bubble sort
	{
		for ( j = 0; j < (n-i-1); j++ )
		{
			if ( arrB[j] > arrB[j+1] )
			{
				temp = arrB[j];
				arrB[j] = arrB[j+1];
				arrB[j+1] = temp;
			}
		}
	}
	if ( m % 2 != 0 )                                                           //if size is odd then finding median for arrA
	{
		median = m / 2;
		medianA = arrA[median];
		printf("Median of array1 : %d\n", medianA);
	}
	else                                                                        //if size is even then
	{
		int index_pos;  
		index_pos = m / 2;
		medianevenA = ((arrA[index_pos]+arrA[index_pos-1]) / (float) 2 );       //geting median value for even no of elements.
		printf("Median of array1 : %g\n", medianevenA);
	}
	if ( n % 2 != 0 )                                                           //if size is odd then finding median for arrB
	{
		median = n / 2;
		medianB = arrB[median];
		printf("Median of array2 : %d\n", medianB);
	}
	else                                                                        //if size is even then
	{
		int indexpos;  
		indexpos = n / 2;
		medianevenB = ((arrB[indexpos]+arrB[indexpos-1]) / (float) 2);          //geting median value for even no of elements.
		printf("Median of array2 : %g\n", medianevenB);
	}
	
    if ( m % 2 != 0 && n % 2 != 0 )                                                 //if both array size is odd
		printf("Median of both arrays : %g\n", ((medianA+medianB) /(float) 2));
	else if ( m % 2 == 0 && n % 2 != 0 )                                            //if only arrA size is even 
		printf("Median of both arrays : %g\n", ((medianevenA+medianB) /(float) 2));
	else if ( m % 2 != 0 && n % 2 == 0 )                                            //if only arrB size is even
		printf("Median of both arrays : %g\n", ((medianA+medianevenB) / (float) 2));
	else                                                                            //if both arrays size is even
		printf("Median of both arrays : %g\n", ((medianevenA+medianevenB) / (float) 2));
	return 0;
}
