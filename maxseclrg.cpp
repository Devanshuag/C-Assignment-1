#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i;
	int arr[5];
	int max;
	int max2;
	printf("Enter The Number:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
		max2=max;
		max=arr[i];

	for(i=0; i<5; i++)
	{
		 if(arr[i]>max)
		 {
			max2=max;
			max=arr[i];
		 }
		 else if(arr[i]>max2 && arr[i]<max)
		 {
			max=arr[i];
		 }
	}
	printf("Max Number Is: %d\n",max);
	printf("Second Largest Number is: %d\n",max2);
	getch();
	return 0;
}
