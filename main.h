#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"project.h"

int main() {
	printf("\t\t\t\t     Welcome to C - Project (Library Management System) \n \t\t\t\t\t\t Dnyaneshwar Chaudhary \n");
	printf("\t\t\t\t     -------------------------------------------------- ");
	int n; //n represents no. of books
	int k;
	
	char User[50];
	int Pass;
	
	for (k=3;k>0;k--){
		char login[5];
		printf("\n\n\t\t\t\tDo you Wish to Continue to the Login Area? (Yes/No) : ");
		scanf("%s",&login);
		
		if(strcmp(login,"Yes")==0){
		printf("\n\n\t\tPlease Enter the Username and Password to Login into the Management System\n");
		printf("\n\t\t\t Enter the Username (Alphabetic Only) : ");
		scanf("%s",&User);
		printf("\n\t\t\t Enter the Password (Numeric Only) : ");
		scanf("%d",&Pass);
			
		if(logininfo(User,Pass)==0){
		
		printf("\n\n\t\t\t Please Enter Number of Books = ");
		scanf("%d",&n); //Enter no. of books
		book* b = (book*)malloc(sizeof(*b)*n); //defining an array of structure using malloc
		int s,t,j=1,l;	
		storebooks(b,n);
		while(j>0){
			
			printf(" \n\n Select Choice : \n 1. Display \n 2. Search by \n 3. Sort by \n 4. Max Price \n 5. Min Price \n 6. Insert \n 7. Update \n 8. Delete \n 0. Logout \n ");
			scanf("%d",&s);
			if (s==0){
				printf("\n\t\t\tSuccessfully Logged Out! Directing to Login Area!\n");
				break;
			}
			switch(s){
				case 1: 
					displaybooks(b,n);
					break;	
				case 2: 
					printf(" Select Choice \n 1. Search by Name \n 2. Search by Book ID \n 3. Search by Author ");
					scanf("%d",&t);
					switch(t){
						case 1: 
							searchbyname(b,n);
							break;
						case 2:
							searchbybookid(b,n);
							break;
						case 3:
							searchbyauthor(b,n);
							break;
						default:
							printf("Wrong Choice Entered, Try Again ");
							break;
					}
					break;
				case 3:
					printf(" Select Choice \n 1. Sort by Price \n 2. Sort by Book ID ");
					scanf("%d",&t);
					switch(t){
						case 1: 
							sortbyprice(b,n);
							break;
						case 2:
							sortbyid(b,n);
							break;
						default:
							printf(" Wrong Choice Entered, Try Again ");
							break;
					}
					break;
				case 4:
					maxpricebook(b,n);
					break;
				case 5:
					minpricebook(b,n);
					break;
				case 6:
					insertbook(b,n++);
					break;
				case 7:
					updatebook(b,n);
					break;
				case 8:
					deletebook(b,n--);
					break;
				default: 
					printf("Wrong Choice Entered, Try Again ");
				}
			}
			j++;
		}
		else {
			printf(" Wrong Username/Password Entered! You have %d Chances Left ",k-1);
			if (k-1==0){
				printf("\n\t\t Couldn't Login into the System\n\t\t You have exhausted your Chances \n\t\t Please Try Again ");
			}
		}
	}	
		else {
			break;
		}
	}	
	return 0;
}
