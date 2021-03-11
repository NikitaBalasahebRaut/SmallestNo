 /*
 Steps to solve the N numbers applications
 
 Step 1 : (Inside main)
 Accept the value of N from user
 
 Step 2: (Inside main)
 Allocate the memory for that N numbers (Dynamically)
 
 Step 3: (Inside main)
 Accept the values in that allocated memory
 
 Step 4: (Pass to the helper function : Shop)
 Pass the address and the size to the function
 
 Step 5: (Operations inside the shop)
 Function will perform the operation on that memory without any alteration.
 
 Step 6: (Inside main)
 After returning to the main function deallocate that memory of N numbers.
 
 Problem statement :
 Accept N numbers from user and return the smallest (Minimum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : -3
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : -8
 
 Input :
 Value of N : 9
 Numbers are :  -5   -4   -7   -8    -5     -8    -1
 Output : -8
 
 Input :
 Value of N : 9
 Numbers are :  11  11  11  11    11      11  11  11  11
 Output : 11

 Input :
 Value of N : 5
 Numbers are :  0   0   0   0   0
 Output : 0
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
  int SmallestNo(int iSize,int arr[])
  {
	int iMin = 0;
	int iCnt = 0;
	
	if(arr == NULL)
	{
	  printf("Invalid adress");
	  return 0;
	}
	if(iSize <= 0)
	{
	  printf("Invalid size \n");
	  return 0;
	}
	
	iMin = arr[0];
	
	for(iCnt = 1;iCnt <iSize; iCnt++)
	{
	   if(arr[iCnt] <  iMin)
	   {
	     iMin = arr[iCnt];
	   }
	}
	return iMin;
  }
  
 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iRet = 0;
   int iCnt = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   iRet = SmallestNo(iNo,ptr);
   
   printf("\n Smallest No is : %d",iRet);
   
      free(ptr);
 return 0;
 }
 
 /*
 
 output
 
 Enter The N Numbers
5
Enter the values
5
3
7
1
2
values are
5
3
7
1
2

 Smallest No is : 1
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\Smallest>myexe
Enter The N Numbers
4
Enter the values
5
-3
7
11
values are
5
-3
7
11

 Smallest No is : -3
 
 */