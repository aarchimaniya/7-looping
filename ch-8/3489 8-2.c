#include<stdio.h>
void main()
{
	
	int n;
	
	printf("enter size of array:");
	scanf("%d",&n);
	
	int a[n],i,choice,pos,val;
	
	for(i=0; i<n; i++){
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	do{
		
		printf("enter....\n");
		printf("1) Insert\n2) Update\n3) Delete\n4) Display\n5) Exit\nEnter your choice:");
		scanf("%d",&choice);
		
		switch (choice) {
			
			case 1:
				printf("Enter position to insert\t:");
				scanf("%d",&pos);
				printf("Enter value to insert\t:");
				scanf("%d",&val);
				
				for(i=n-1; i>=pos; i--) {
					a[i+1] =a[i];
				}
				
				a[pos] = val;
				n++;
				
				break;
				
			case 2:
				printf("Enter position to update\t:");
				scanf("%d",&pos);
				printf("Enter value to update\t:");
				scanf("%d",&val);
				
				a[pos] = val;
				
				break;
				
			case 3:
				printf("Enter position to delete\t:");
				scanf("%d",&pos);
				
				for(i=pos; i<n; i++) {
					a[i] = a[i+1];
				}
				
				n--;
				
				break;
				
			case 4:
				
				printf("\nArray a:");
				for(i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				printf("\n");
				

				
		}
		
		
	}while(choice !=5);
}
