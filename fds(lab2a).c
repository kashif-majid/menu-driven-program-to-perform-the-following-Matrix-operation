#include <stdio.h>
#include <stdlib.h>

main()
{
int ch,i,j,k,x,y,z,h,size=0,sum=0;
int a[10][10],b[10][10],c[10][10],d[3][10],max[10];
do{
	system("cls");
	printf("\n -------------MATRIX OPERATIONS---------------"); 
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Find Greatest Number from Each Row");
	printf("\n5. Addition of Major Diagonal Elements");
	printf("\n6. Sparse matrix representation for given matrix");
	printf("\n7. Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
			
switch(ch){
	case 1:
		printf("\nEnter order resp. of the 1st and 2nd matrices:\n"); 
		scanf("%d\n%d",&x,&y);
	
		printf("Enter 1st matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter 2nd matrix:\n"); 
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nMatrix Addition:\n");
		for(i=0;i<x;i++) 
		{
			for(j=0;j<y;j++)
			{
			c[i][j]=a[i][j]+b[i][j];
			printf("[%d][%d]:",i,j);
			printf("%d\n",c[i][j]);
			}
		}
	break;
	case 2:
		printf("\nEnter order resp. of the 1st and 2nd matrices:\n"); 
		scanf("%d\n%d",&x,&y);
	
		printf("Enter 1st matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter 2nd matrix:\n"); 
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nMatrix Substraction:\n"); 
		for(i=0;i<x;i++) 
		{
			for(j=0;j<y;j++)
			{
			c[i][j]=a[i][j]-b[i][j];
			printf("[%d][%d]:",i,j);
			printf("%d\n",c[i][j]);
			}
		}
	break;
	case 3:
		printf("\nEnter order resp. of the 1st and 2nd matrices:\n");
		printf("Enter uncommon order of 1st matrix: "); 
		scanf("%d",&x);
		printf("Enter common order of 1st and 2nd matrix: "); 
		scanf("%d",&y);
		printf("Enter uncommon order of 2st matrix: "); 
		scanf("%d",&z);
	
		printf("Enter 1st matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		
		printf("\nEnter 2nd matrix:\n"); 
		for(i=0;i<y;i++)
		{
			for(j=0;j<z;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			}
		}
		printf("\nMatrix Multiplication:\n"); 
		for(i=0;i<x;i++) 
		{
		for(j=0;j<z;j++)
		{
			c[i][j]=0;
			for(k=0;k<y;k++)
			{
			c[i][j]+=a[i][k]*b[k][j]; 
			printf("[%d][%d]:",i,j);
			printf("%d ",c[i][j]);
			}
		}
		}
	break;
	case 4:
		printf("\nEnter order of the matrices resp.:\n"); 
		scanf("%d\n%d",&x,&y);
	
		printf("Enter Element of matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<x;i++)
		{
			max[i]= a[i][0];
			for(j=1;j<y;j++)
			{
			if(a[i][j]>max[i])
			max[i]=a[i][j];	
			}
		printf("Maximum number of  row %d: %d\n",i+1,max[i]);	
		}		
	break;
	case 5:
		printf("\nEnter order of the matrices resp.:\n"); 
		scanf("%d\n%d",&x,&y);
	
		printf("Enter Element of matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			if(i==j)
				sum=sum+a[i][j];
			}	
		}
		printf("Sum  of  Major Diagonal Elements: %d",sum);
	break;
	case 6:
		printf("\nEnter order of the matrices resp.:\n"); 
		scanf("%d\n%d",&x,&y);
		
		printf("Enter Element of matrix:\n");
		for(i=0;i<x;i++)
		{	
			for(j=0;j<y;j++)
			{
			printf("[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			}
		}
		printf("\n");	
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			if(a[i][j]!=0)
				size++;
			}
		}
		k=0;
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
			if(a[i][j]!=0)
			{
				d[0][k] = i; 
                d[1][k] = j; 
                d[2][k] = a[i][j]; 
               	k++; 
			}
			}		
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<size;j++)
				printf("%d \t",d[i][j]);
			printf("\n");
		}
	break;
	case 7:
		exit(0);
	break;
	default:
		printf("INVALID INPUT\n");
	break;		
}
		
printf("\nIF U WANT TO CONTINUE PRESS 1 IF NOT THAN PRESS ANY KEY: ");
scanf("%d",&h);
}
while(h==1);
}
